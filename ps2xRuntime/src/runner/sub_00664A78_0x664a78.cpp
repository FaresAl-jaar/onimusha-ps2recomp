#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00664A78
// Address: 0x664a78 - 0x664bd8
void sub_00664A78_0x664a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00664A78_0x664a78");
#endif

    switch (ctx->pc) {
        case 0x664bb8u: goto label_664bb8;
        case 0x664bbcu: goto label_664bbc;
        case 0x664bc0u: goto label_664bc0;
        case 0x664bc4u: goto label_664bc4;
        case 0x664bc8u: goto label_664bc8;
        case 0x664bccu: goto label_664bcc;
        case 0x664bd0u: goto label_664bd0;
        default: break;
    }

    ctx->pc = 0x664a78u;

    // 0x664a78: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664a78u;
    
    // 0x664a7c: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664a80: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a80u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664a84: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664a88: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664a8c: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664a90: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664a90u;
    
    // 0x664a94: 0x3f828f5a  .word       0x3F828F5A                   # lui         $v0, 0x8F5A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36698 << 16));
    // 0x664a98: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x664a9c: 0x3eb33335  .word       0x3EB33335                   # lui         $s3, 0x3335 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13109 << 16));
    // 0x664aa0: 0x3f6e147a  .word       0x3F6E147A                   # lui         $t6, 0x147A # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5242 << 16));
    // 0x664aa4: 0x3d4ccccc  .word       0x3D4CCCCC                   # lui         $t4, 0xCCCC # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52428 << 16));
    // 0x664aa8: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664aa8u;
    
    // 0x664aac: 0x3f828f5a  .word       0x3F828F5A                   # lui         $v0, 0x8F5A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36698 << 16));
    // 0x664ab0: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ab0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x664ab4: 0x3eb33332  .word       0x3EB33332                   # lui         $s3, 0x3332 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13106 << 16));
    // 0x664ab8: 0x3f6e147a  .word       0x3F6E147A                   # lui         $t6, 0x147A # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ab8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5242 << 16));
    // 0x664abc: 0x3d4ccccc  .word       0x3D4CCCCC                   # lui         $t4, 0xCCCC # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664abcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52428 << 16));
    // 0x664ac0: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664ac0u;
    
    // 0x664ac4: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664ac8: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x664acc: 0x3eb33332  .word       0x3EB33332                   # lui         $s3, 0x3332 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13106 << 16));
    // 0x664ad0: 0x3f6e1478  .word       0x3F6E1478                   # lui         $t6, 0x1478 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5240 << 16));
    // 0x664ad4: 0x3d4ccccc  .word       0x3D4CCCCC                   # lui         $t4, 0xCCCC # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52428 << 16));
    // 0x664ad8: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664ad8u;
    
    // 0x664adc: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664ae0: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ae0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664ae4: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ae4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664ae8: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ae8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664aec: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664aecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664af0: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664af0u;
    
    // 0x664af4: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664af8: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664af8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664afc: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b00: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b00u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b04: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b04u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b08: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664b08u;
    
    // 0x664b0c: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664b10: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b10u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664b14: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b18: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b1c: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b1cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b20: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664b20u;
    
    // 0x664b24: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664b28: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b28u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664b2c: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b30: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b34: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b38: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664b38u;
    
    // 0x664b3c: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664b40: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664b44: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b48: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b4c: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b4cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b50: 0x1e04b0  tge         $zero, $fp, 18
    ctx->pc = 0x664b50u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
    // 0x664b54: 0x3de1461f  .word       0x3DE1461F                   # lui         $at, 0x461F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17951 << 16));
    // 0x664b58: 0x3eb851c8  .word       0x3EB851C8                   # lui         $t8, 0x51C8 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b58u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20936 << 16));
    // 0x664b5c: 0x3f35c271  .word       0x3F35C271                   # lui         $s5, 0xC271 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49777 << 16));
    // 0x664b60: 0x3ca3da85  .word       0x3CA3DA85                   # lui         $v1, 0xDA85 # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55941 << 16));
    // 0x664b64: 0x3cf5c185  .word       0x3CF5C185                   # lui         $s5, 0xC185 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b64u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49541 << 16));
    // 0x664b68: 0xa0e00  sll         $at, $t2, 24
    ctx->pc = 0x664b68u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x664b6c: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664b70: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664b74: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b78: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b7c: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b80: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664b80u;
    
    // 0x664b84: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664b88: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b88u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664b8c: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664b90: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b90u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664b94: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b94u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664b98: 0xa0300  sll         $zero, $t2, 12
    ctx->pc = 0x664b98u;
    
    // 0x664b9c: 0x3f828f5b  .word       0x3F828F5B                   # lui         $v0, 0x8F5B # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36699 << 16));
    // 0x664ba0: 0x3eccccc8  .word       0x3ECCCCC8                   # lui         $t4, 0xCCC8 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ba0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52424 << 16));
    // 0x664ba4: 0x3eb3332d  .word       0x3EB3332D                   # lui         $s3, 0x332D # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13101 << 16));
    // 0x664ba8: 0x3f6e147b  .word       0x3F6E147B                   # lui         $t6, 0x147B # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
    // 0x664bac: 0x3d4cccc2  .word       0x3D4CCCC2                   # lui         $t4, 0xCCC2 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x664bacu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52418 << 16));
    // 0x664bb0: 0xe810e80  jal         func_A043A00
    ctx->pc = 0x664BB0u;
    SET_GPR_U32(ctx, 31, 0x664BB8u);
    ctx->pc = 0x664BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x664BB0u;
    // 0x664bb4: 0xe830e82  jal         func_A0C3A08 (Delay Slot)
    // JAL 0xA0C3A08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA043A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA043A00u, 0x664BB0u, 0x664BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x664BB8u;
label_664bb8:
    // 0x664bb8: 0xe900e85  jal         func_A403A14
label_664bbc:
    if (ctx->pc == 0x664BBCu) {
        ctx->pc = 0x664BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x664BB8u;
        // 0x664bbc: 0xe920e91  jal         func_A483A44 (Delay Slot)
        // JAL 0xA483A44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x664BC0u;
        goto label_664bc0;
    }
    ctx->pc = 0x664BB8u;
    SET_GPR_U32(ctx, 31, 0x664BC0u);
    ctx->pc = 0x664BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x664BB8u;
    // 0x664bbc: 0xe920e91  jal         func_A483A44 (Delay Slot)
    // JAL 0xA483A44 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA403A14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA403A14u, 0x664BB8u, 0x664BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x664BC0u;
label_664bc0:
    // 0x664bc0: 0xe840e93  jal         func_A103A4C
label_664bc4:
    if (ctx->pc == 0x664BC4u) {
        ctx->pc = 0x664BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x664BC0u;
        // 0x664bc4: 0xe950e94  jal         func_A543A50 (Delay Slot)
        // JAL 0xA543A50 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x664BC8u;
        goto label_664bc8;
    }
    ctx->pc = 0x664BC0u;
    SET_GPR_U32(ctx, 31, 0x664BC8u);
    ctx->pc = 0x664BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x664BC0u;
    // 0x664bc4: 0xe950e94  jal         func_A543A50 (Delay Slot)
    // JAL 0xA543A50 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xA103A4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA103A4Cu, 0x664BC0u, 0x664BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x664BC8u;
label_664bc8:
    // 0x664bc8: 0xe970e96  jal         func_A5C3A58
label_664bcc:
    if (ctx->pc == 0x664BCCu) {
        ctx->pc = 0x664BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x664BC8u;
        // 0x664bcc: 0xe98  .word       0x00000E98                   # mult        $at, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x664BD0u;
        goto label_664bd0;
    }
    ctx->pc = 0x664BC8u;
    SET_GPR_U32(ctx, 31, 0x664BD0u);
    ctx->pc = 0x664BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x664BC8u;
    // 0x664bcc: 0xe98  .word       0x00000E98                   # mult        $at, $zero, $zero # 00000680 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xA5C3A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA5C3A58u, 0x664BC8u, 0x664BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x664BD0u;
label_664bd0:
    // 0x664bd0: 0xff10ff0  jal         func_FC43FC0
    ctx->pc = 0x664BD0u;
    SET_GPR_U32(ctx, 31, 0x664BD8u);
    ctx->pc = 0x664BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x664BD0u;
    // 0x664bd4: 0xed00ff2  jal         func_B403FC8 (Delay Slot)
    // JAL 0xB403FC8 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xFC43FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xFC43FC0u, 0x664BD0u, 0x664BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x664BD8u;
}
