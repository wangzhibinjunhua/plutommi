#include "MMIDataType.h"
#include "gdi_linear_transform.h"
#include "Watch_barrel.h"

extern swatch_mm_struct mainmenu_swatch_list;

U16 watch_slide_type;

#define WATCH_X_TO_F(x)                   ((float)x / 65536.0f)
#define WATCH_F_TO_X(x)                   (S32)((x) * 65536.0f)
#define WATCH_PI                          (3.1415926f)
#define WATCH_DEG_TO_RAD(x)               ((float)((float)(x)) * WATCH_PI / 180.0f)
#define WATCH_RAD_TO_DEG(x)               ((float)((float)(x)) * 180.0f / WATCH_PI)

/*****************************************************************************
 * FUNCTION
 *  mmi_applist_sin
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
float mmi_watch_sin(float rad)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return WATCH_X_TO_F(iul_x_sin_rad(WATCH_F_TO_X(rad)));
}


/*****************************************************************************
 * FUNCTION
 *  mmi_applist_cos
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
float mmi_watch_cos(float rad)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/


    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return WATCH_X_TO_F(iul_x_cos_rad(WATCH_F_TO_X(rad)));
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_set_3x3_identity
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_set_3x3_identity(gdi_lt_matrix_struct *transform)
{ 
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    transform->m[0] = 1.0f;
    transform->m[1] = 0.0f;
    transform->m[2] = 0.0f;
    transform->m[3] = 0.0f;
    transform->m[4] = 1.0f;
    transform->m[5] = 0.0f;
    transform->m[6] = 0.0f;
    transform->m[7] = 0.0f;
    transform->m[8] = 1.0f;    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_set_4x4_identity
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_set_4x4_identity(float m[16])
{ 
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    m[0] = 1;
    m[1] = 0;
    m[2] = 0;
    m[3] = 0;
    m[4] = 0;
    m[5] = 1;
    m[6] = 0;
    m[7] = 0;
    m[8] = 0;
    m[9] = 0;
    m[10] = 1;
    m[11] = 0;
    m[12] = 0;
    m[13] = 0;
    m[14] = 0;
    m[15] = 1;   
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_set_camera
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_set_camera(
    float m[16], /* Out */
    float scaleX,
    float scaleY,
    float translateX,
    float translateY,
    float nearPlane,
    float cameraDistance,
    float cameraUp,
    float tile,
    float pan)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
   
    m[0] = scaleX * mmi_watch_cos(WATCH_DEG_TO_RAD(pan)) + (translateX * mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane)* -1 * mmi_watch_sin(WATCH_DEG_TO_RAD(pan));
    m[4] = translateX * mmi_watch_sin(WATCH_DEG_TO_RAD(tile))/nearPlane ;
    m[8] = scaleX * mmi_watch_sin(WATCH_DEG_TO_RAD(pan)) + (translateX * mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane)* mmi_watch_cos(WATCH_DEG_TO_RAD(pan));
    m[12] = translateX * cameraDistance / nearPlane;

    m[1] = (-1 * scaleY * mmi_watch_sin(WATCH_DEG_TO_RAD(tile)) + translateY * mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane) * -1 * mmi_watch_sin(WATCH_DEG_TO_RAD(pan));
    m[5] = scaleY * mmi_watch_cos(WATCH_DEG_TO_RAD(tile)) + translateY * mmi_watch_sin(WATCH_DEG_TO_RAD(tile))/nearPlane;
    m[9] = (-1 * scaleY * mmi_watch_sin(WATCH_DEG_TO_RAD(tile)) + translateY * mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane) * mmi_watch_cos(WATCH_DEG_TO_RAD(pan));
    m[13] = scaleY * cameraUp + translateY * cameraDistance / nearPlane;

    m[2] = mmi_watch_cos(WATCH_DEG_TO_RAD(tile)) * -1 * mmi_watch_sin(WATCH_DEG_TO_RAD(pan));
    m[6] = mmi_watch_sin(WATCH_DEG_TO_RAD(tile));
    m[10] = mmi_watch_cos(WATCH_DEG_TO_RAD(tile)) * mmi_watch_cos(WATCH_DEG_TO_RAD(pan));
    m[14] = cameraDistance;

    m[3] = mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane * -1 * mmi_watch_sin(WATCH_DEG_TO_RAD(pan));
    m[7] = mmi_watch_sin(WATCH_DEG_TO_RAD(tile))/nearPlane;
    m[11] = mmi_watch_cos(WATCH_DEG_TO_RAD(tile))/nearPlane * mmi_watch_cos(WATCH_DEG_TO_RAD(pan));
    m[15] = cameraDistance/nearPlane;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_get_matrix
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_watch_get_matrix(
        mmi_applist_watch_type_enum type, 
        float value1,
        float value2,
        gdi_lt_matrix_struct *out)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    float radian;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (type == MMI_WATCH_MATRIX_TYPE_MOVE)
    {
        out->m[0] = 1.0f;
        out->m[1] = 0.0f;
        out->m[2] = value1; 
        out->m[3] = 0.0f;
        out->m[4] = 1.0f;   
        out->m[5] = value2;
        
    }
    else if (type == MMI_WATCH_MATRIX_TYPE_SCALE)
    {
        out->m[0] = value1;
        out->m[1] = 0.0f;
        out->m[2] = 0.0f; 
        out->m[3] = 0.0f;
        out->m[4] = value2;   
        out->m[5] = 0.0f;
    }
    else if (type == MMI_WATCH_MATRIX_TYPE_ROTATE)
    {
        radian = value1 * 3.14f / 180;
        out->m[0] = mmi_watch_cos(radian);
        out->m[1] = -mmi_watch_sin(radian);
        out->m[2] = 0.0f; 
        out->m[3] = mmi_watch_sin(radian);
        out->m[4] = mmi_watch_cos(radian);
        out->m[5] = 0.0f;
    }  
    
    out->m[6] = 0.0f;
    out->m[7] = 0.0f;
    out->m[8] = 1.0f;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_matrix_multiply
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_watch_matrix_multiply(float *a, float *b, float *out)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i, j, k, idx;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    for (i = 0; i < 3; i ++)
    {
        for (j = 0; j < 3; j ++)
        {
            idx = i * 3 + j;
            out[idx] = 0; 
            for (k = 0; k < 3; k ++)
            {
                out[idx] += a[i * 3 + k] * b[k * 3 + j];
            }
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_4x4_multiply
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_4x4_multiply(float a[16], float b[16], float out[16])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* Column major matrix multiplication */
    out[0]  = a[0] * b[0]  + a[4] * b[1]  + a[8] * b[2]  + a[12] * b[3];
    out[4]  = a[0] * b[4]  + a[4] * b[5]  + a[8] * b[6]  + a[12] * b[7];
    out[8]  = a[0] * b[8]  + a[4] * b[9]  + a[8] * b[10] + a[12] * b[11];
    out[12] = a[0] * b[12] + a[4] * b[13] + a[8] * b[14] + a[12] * b[15];

    out[1]  = a[1] * b[0]  + a[5] * b[1]  + a[9] * b[2]  + a[13] * b[3];
    out[5]  = a[1] * b[4]  + a[5] * b[5]  + a[9] * b[6]  + a[13] * b[7];
    out[9]  = a[1] * b[8]  + a[5] * b[9]  + a[9] * b[10] + a[13] * b[11];
    out[13] = a[1] * b[12] + a[5] * b[13] + a[9] * b[14] + a[13] * b[15];

    out[2]  = a[2] * b[0]  + a[6] * b[1]  + a[10] * b[2]  + a[14] * b[3];
    out[6]  = a[2] * b[4]  + a[6] * b[5]  + a[10] * b[6]  + a[14] * b[7];
    out[10] = a[2] * b[8]  + a[6] * b[9]  + a[10] * b[10] + a[14] * b[11];
    out[14] = a[2] * b[12] + a[6] * b[13] + a[10] * b[14] + a[14] * b[15];

    out[3]  = a[3] * b[0]  + a[7] * b[1]  + a[11] * b[2]  + a[15] * b[3];
    out[7]  = a[3] * b[4]  + a[7] * b[5]  + a[11] * b[6]  + a[15] * b[7];
    out[11] = a[3] * b[8]  + a[7] * b[9]  + a[11] * b[10] + a[15] * b[11];
    out[15] = a[3] * b[12] + a[7] * b[13] + a[11] * b[14] + a[15] * b[15];

}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_set_4x4_translation
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_set_4x4_translation(float m[16], float tx, float ty, float tz)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    mmi_watch_barrel_set_4x4_identity(m);

    /* Column major matrix */
    m[12] = tx;
    m[13] = ty;
    m[14] = tz;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_awatch_barrel_set_4x4_rotate_by_y
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_awatch_barrel_set_4x4_rotate_by_y(float m[16], float rad)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_watch_barrel_set_4x4_identity(m);

    /* Column major matrix */
    m[0] = m[10] = mmi_watch_cos(rad);
    m[8] = mmi_watch_sin(rad);
    m[2] = -1 * m[8];
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_init_3x3_matrix
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_init_3x3_matrix(float out[9], float m[16])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    out[0] = m[0];
    out[3] = m[4];
    out[6] = m[12];
    out[1] = m[1];
    out[4] = m[5];
    out[7] = m[13];
    out[2] = m[3];
    out[5] = m[7];
    out[8] = m[15];
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_transpose_3x3_matrix
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_watch_barrel_transpose_3x3_matrix(float m[9])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i, j;
    float tmp;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 0; i < 3; i ++)
    {
        for (j = i + 1; j < 3; j ++)
        {
            tmp = m[i * 3 + j];
            m[i * 3 + j] = m[j * 3 + i];
            m[j * 3 + i] = tmp;
        }
    }

    for (i = 0; i < 9; i ++)
    {
        m[i] /= m[8];        
    }
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_get_normal
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_watch_barrel_get_normal(
        S32 cell_index,
        gdi_lt_matrix_struct *transform,
        U8 *opacity,
        float *pos_z)
{ 
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_watch_cell_struct *cell;
    gdi_lt_matrix_struct move, affine;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    cell =(mmi_watch_cell_struct *)mmi_watch_get_cell_ptr(cell_index);

    /* Assign matrix */
    //move orgin point to cell center
    mmi_watch_get_matrix(
        MMI_WATCH_MATRIX_TYPE_MOVE, 
        -mainmenu_swatch_list.cell_width / 2, 
        -mainmenu_swatch_list.cell_height / 2,
        &move); 
    
    mmi_watch_barrel_set_3x3_identity(&affine);

    /* Fixed value */
    *pos_z = 0;
    
    /* Move to destination */
    affine.m[2] = cell->pos.x;
	
    affine.m[5] += cell->pos.y - mainmenu_swatch_list.pen_move_offset;
	
    mmi_watch_matrix_multiply(affine.m, move.m, transform->m); 

    /* Opacity */
    *opacity = 255;;
}


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

watch_transform_func g_barrel_get_transform_func_array[] =
{
    &mmi_watch_barrel_get_normal,
	//&mmi_watch_barrel_get_cube,
	//&mmi_watch_barrel_get_cylinder,
};


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_change_transform
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_watch_barrel_change_transform()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 max_type = sizeof(g_barrel_get_transform_func_array) / sizeof(watch_transform_func);
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/  
    watch_slide_type = rand();
	watch_slide_type = watch_slide_type % max_type;

	//watch_slide_type = 2;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_watch_barrel_get_transform
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
watch_transform_func mmi_watch_barrel_get_transform(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 max_type = sizeof(g_barrel_get_transform_func_array) / sizeof(watch_transform_func);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/  

    if (watch_slide_type >= max_type)
        return NULL;
    
    return g_barrel_get_transform_func_array[0];
}

void mmi_watch_transform_apply_point(const gdi_lt_matrix_struct *matrix, 
	                                          mmi_watch_position *point)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    float px, py, u, v, w;
    const float *m = matrix->m;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    px = point->x;
    py = point->y;

    u = px * m[0] + py * m[1] + m[2];
    v = px * m[3] + py * m[4] + m[5];
    w = px * m[6] + py * m[7] + m[8];

    /* get rid of divided by zero */
    // TODO: maybe assert...
    if (w == 0)
    {
        w = 1;
    }

    point->x = u / w;
    point->y = v / w;
}


void mmi_watch_get_output_rect(gdi_lt_matrix_struct *matrix, S32 in_width, S32 in_height, mmi_watch_rect_struct *rect)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32     i;
    float   x1, y1, x2, y2;
    float   x, y;

    mmi_watch_position vertex[4];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* top-left point */
    vertex[0].x = 0;
    vertex[0].y = 0;
    /* top-right point */
    vertex[1].x = (float)(in_width - 1);
    vertex[1].y = 0;
    /* bottom-left point */
    vertex[2].x = 0;
    vertex[2].y = (float)(in_height - 1);
    /* bottom-right point */
    vertex[3].x = (float)(in_width - 1);
    vertex[3].y = (float)(in_height - 1);

    x1 = 1000000;
    y1 = 1000000;
    x2 = -1000000;
    y2 = -1000000;

    /* get the output rect */
    for (i = 0; i < 4; i++)
    {
        mmi_watch_transform_apply_point(matrix, &vertex[i]);

        x = vertex[i].x;
        y = vertex[i].y;

        if (x < x1)
        {
            x1 = x;
        }

        if (x > x2)
        {
            x2 = x;
        }

        if (y < y1)
        {
            y1 = y;
        }

        if (y > y2)
        {
            y2 = y;
        }
    }

    /* enlarge the output rect a little to be safer from errors */
    // TODO: These are experiment values...
    x1 -= 4;
    y1 -= 4;
    x2 += 4;
    y2 += 4;

    rect->x1 = x1;
    rect->x2 = x2;
    rect->y1 = y1;
    rect->y2 = y2;
}


