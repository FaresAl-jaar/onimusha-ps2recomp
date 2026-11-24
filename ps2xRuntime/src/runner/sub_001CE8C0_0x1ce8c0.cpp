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

// Function: sub_001CE8C0
// Address: 0x1ce8c0 - 0x1cee00
void sub_001CE8C0_0x1ce8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE8C0_0x1ce8c0");
#endif

    switch (ctx->pc) {
        case 0x1ceab0u: goto label_1ceab0;
        case 0x1cebb8u: goto label_1cebb8;
        default: break;
    }

    ctx->pc = 0x1ce8c0u;

    // 0x1ce8c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1ce8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1ce8c4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ce8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ce8c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ce8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ce8cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ce8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ce8d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ce8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ce8d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ce8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ce8d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ce8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ce8dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ce8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ce8e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ce8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ce8e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce8e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE8E8u;
    {
        const bool branch_taken_0x1ce8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8E8u;
        // 0x1ce8ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8e8) {
            ctx->pc = 0x1CE910u;
            goto label_1ce910;
        }
    }
    ctx->pc = 0x1CE8F0u;
    // 0x1ce8f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce8f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ce8f8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1ce8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce8fc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1ce8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1ce900: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ce904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE904u;
    {
        const bool branch_taken_0x1ce904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE904u;
        // 0x1ce908: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce904) {
            ctx->pc = 0x1CE928u;
            goto label_1ce928;
        }
    }
    ctx->pc = 0x1CE90Cu;
    // 0x1ce90c: 0x0  nop
    ctx->pc = 0x1ce90cu;
    // NOP
label_1ce910:
    // 0x1ce910: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce914: 0x3c032402  lui         $v1, 0x2402
    ctx->pc = 0x1ce914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9218 << 16));
    // 0x1ce918: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ce918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce91c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1ce91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1ce920: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ce920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ce924: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1ce924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1ce928:
    // 0x1ce928: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ce928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1ce92c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ce92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ce930: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x1ce930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce934: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ce934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ce938: 0x24057900  addiu       $a1, $zero, 0x7900
    ctx->pc = 0x1ce938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1ce93c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1ce93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1ce940: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1ce940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ce944: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ce944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ce948: 0x24057000  addiu       $a1, $zero, 0x7000
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1ce94c: 0xaf848b28  sw          $a0, -0x74D8($gp)
    ctx->pc = 0x1ce94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 4));
    // 0x1ce950: 0xa65825  or          $t3, $a1, $a2
    ctx->pc = 0x1ce950u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ce954: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ce954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1ce958: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce95c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1ce95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ce960: 0x3c053a00  lui         $a1, 0x3A00
    ctx->pc = 0x1ce960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14848 << 16));
    // 0x1ce964: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x1ce964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ce968: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ce968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1ce96c: 0xaf898b2c  sw          $t1, -0x74D4($gp)
    ctx->pc = 0x1ce96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 9));
    // 0x1ce970: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce974: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1ce974u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1ce978: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ce97c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ce97cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ce980: 0x240c001a  addiu       $t4, $zero, 0x1A
    ctx->pc = 0x1ce980u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1ce984: 0xaf848b30  sw          $a0, -0x74D0($gp)
    ctx->pc = 0x1ce984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 4));
    // 0x1ce988: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ce98c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1ce98cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x1ce990: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x1ce990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ce994: 0xfc8c0018  sd          $t4, 0x18($a0)
    ctx->pc = 0x1ce994u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 12));
    // 0x1ce998: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x1ce998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1ce99c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce9a0: 0x34a500c0  ori         $a1, $a1, 0xC0
    ctx->pc = 0x1ce9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)192);
    // 0x1ce9a4: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x1ce9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x1ce9a8: 0xa63825  or          $a3, $a1, $a2
    ctx->pc = 0x1ce9a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1ce9ac: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1ce9acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1ce9b0: 0x240c004f  addiu       $t4, $zero, 0x4F
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ce9b4: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ce9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x1ce9b8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ce9bc: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ce9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1ce9c0: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x1ce9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1ce9c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce9c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ce9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ce9cc: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x1ce9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x1ce9d0: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x1ce9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1ce9d4: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1ce9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1ce9d8: 0x240b003f  addiu       $t3, $zero, 0x3F
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ce9dc: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1ce9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1ce9e0: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x1ce9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x1ce9e4: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1ce9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1ce9e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ce9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ce9ec: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ce9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ce9f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1ce9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1ce9f4: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1ce9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1ce9f8: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ce9fc: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1ce9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1cea00: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1cea00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cea04: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1cea04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1cea08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cea0c: 0xfc8b0018  sd          $t3, 0x18($a0)
    ctx->pc = 0x1cea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 11));
    // 0x1cea10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cea14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cea18: 0x34028083  ori         $v0, $zero, 0x8083
    ctx->pc = 0x1cea18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32899);
    // 0x1cea1c: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1cea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1cea20: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cea24: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1cea24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1cea28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1cea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1cea2c: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1cea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1cea30: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cea30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cea34: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1cea34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1cea38: 0x34428383  ori         $v0, $v0, 0x8383
    ctx->pc = 0x1cea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33667);
    // 0x1cea3c: 0x24090356  addiu       $t1, $zero, 0x356
    ctx->pc = 0x1cea3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x1cea40: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cea44: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1cea44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1cea48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1cea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cea4c: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1cea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1cea50: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1cea50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1cea54: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x1cea54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x1cea58: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x1cea58u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cea60: 0xfc8a0018  sd          $t2, 0x18($a0)
    ctx->pc = 0x1cea60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 10));
    // 0x1cea64: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1cea64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cea68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cea6c: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1cea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1cea70: 0x24150041  addiu       $s5, $zero, 0x41
    ctx->pc = 0x1cea70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cea74: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x1cea74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1cea78: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cea78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cea7c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x1cea7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1cea80: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cea84: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x1cea84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x1cea88: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x1cea88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cea8c: 0x7005a389  pcpyld      $s4, $zero, $a1
    ctx->pc = 0x1cea8cu;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1cea90: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1cea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1cea94: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x1cea94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cea98: 0x70039389  pcpyld      $s2, $zero, $v1
    ctx->pc = 0x1cea98u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1cea9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ceaa0: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x1ceaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x1ceaa4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1CEAA4u;
    {
        const bool branch_taken_0x1ceaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAA4u;
        // 0x1ceaa8: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaa4) {
            ctx->pc = 0x1CEC20u;
            goto label_1cec20;
        }
    }
    ctx->pc = 0x1CEAACu;
    // 0x1ceaac: 0x0  nop
    ctx->pc = 0x1ceaacu;
    // NOP
label_1ceab0:
    // 0x1ceab0: 0x13080021  beq         $t8, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CEAB0u;
    {
        const bool branch_taken_0x1ceab0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ceab0) {
            ctx->pc = 0x1CEB38u;
            goto label_1ceb38;
        }
    }
    ctx->pc = 0x1CEAB8u;
    // 0x1ceab8: 0x13070019  beq         $t8, $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CEAB8u;
    {
        const bool branch_taken_0x1ceab8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 7));
        if (branch_taken_0x1ceab8) {
            ctx->pc = 0x1CEB20u;
            goto label_1ceb20;
        }
    }
    ctx->pc = 0x1CEAC0u;
    // 0x1ceac0: 0x130a000d  beq         $t8, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEAC0u;
    {
        const bool branch_taken_0x1ceac0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 10));
        if (branch_taken_0x1ceac0) {
            ctx->pc = 0x1CEAF8u;
            goto label_1ceaf8;
        }
    }
    ctx->pc = 0x1CEAC8u;
    // 0x1ceac8: 0x13000003  beqz        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEAC8u;
    {
        const bool branch_taken_0x1ceac8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceac8) {
            ctx->pc = 0x1CEAD8u;
            goto label_1cead8;
        }
    }
    ctx->pc = 0x1CEAD0u;
    // 0x1cead0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CEAD0u;
    {
        const bool branch_taken_0x1cead0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cead0) {
            ctx->pc = 0x1CEB50u;
            goto label_1ceb50;
        }
    }
    ctx->pc = 0x1CEAD8u;
label_1cead8:
    // 0x1cead8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1cead8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1ceadc: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ceadcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ceae0: 0x64110080  daddiu      $s1, $zero, 0x80
    ctx->pc = 0x1ceae0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
    // 0x1ceae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ceae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceae8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1ceae8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CEAECu;
    {
        const bool branch_taken_0x1ceaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAECu;
        // 0x1ceaf0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceaec) {
            ctx->pc = 0x1CEB50u;
            goto label_1ceb50;
        }
    }
    ctx->pc = 0x1CEAF4u;
    // 0x1ceaf4: 0x0  nop
    ctx->pc = 0x1ceaf4u;
    // NOP
label_1ceaf8:
    // 0x1ceaf8: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1ceaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1ceafc: 0x64110040  daddiu      $s1, $zero, 0x40
    ctx->pc = 0x1ceafcu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x1ceb00: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1ceb00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1ceb04: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1ceb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1ceb08: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x1ceb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ceb0c: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1ceb0cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ceb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ceb14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CEB14u;
    {
        const bool branch_taken_0x1ceb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB14u;
        // 0x1ceb18: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb14) {
            ctx->pc = 0x1CEB50u;
            goto label_1ceb50;
        }
    }
    ctx->pc = 0x1CEB1Cu;
    // 0x1ceb1c: 0x0  nop
    ctx->pc = 0x1ceb1cu;
    // NOP
label_1ceb20:
    // 0x1ceb20: 0x6411002a  daddiu      $s1, $zero, 0x2A
    ctx->pc = 0x1ceb20u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)42);
    // 0x1ceb24: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x1ceb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ceb28: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1ceb28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1ceb2c: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x1ceb2cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEB30u;
    {
        const bool branch_taken_0x1ceb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB30u;
        // 0x1ceb34: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb30) {
            ctx->pc = 0x1CEB50u;
            goto label_1ceb50;
        }
    }
    ctx->pc = 0x1CEB38u;
label_1ceb38:
    // 0x1ceb38: 0x64110020  daddiu      $s1, $zero, 0x20
    ctx->pc = 0x1ceb38u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x1ceb3c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1ceb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1ceb40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ceb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb44: 0x24190010  addiu       $t9, $zero, 0x10
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ceb48: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1ceb48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ceb4c: 0x0  nop
    ctx->pc = 0x1ceb4cu;
    // NOP
label_1ceb50:
    // 0x1ceb50: 0x13000007  beqz        $t8, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEB50u;
    {
        const bool branch_taken_0x1ceb50 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB50u;
        // 0x1ceb54: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb50) {
            ctx->pc = 0x1CEB70u;
            goto label_1ceb70;
        }
    }
    ctx->pc = 0x1CEB58u;
    // 0x1ceb58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ceb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ceb5c: 0x34630064  ori         $v1, $v1, 0x64
    ctx->pc = 0x1ceb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x1ceb60: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1ceb60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1ceb64: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1ceb64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1ceb68: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1ceb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ceb6c: 0x0  nop
    ctx->pc = 0x1ceb6cu;
    // NOP
label_1ceb70:
    // 0x1ceb70: 0x19183c  dsll32      $v1, $t9, 0
    ctx->pc = 0x1ceb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) << (32 + 0));
    // 0x1ceb74: 0x10603c  dsll32      $t4, $s0, 0
    ctx->pc = 0x1ceb74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1ceb78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ceb78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ceb7c: 0x35c38  dsll        $t3, $v1, 16
    ctx->pc = 0x1ceb7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 16);
    // 0x1ceb80: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1ceb80u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1ceb84: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x1ceb84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x1ceb88: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x1ceb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x1ceb8c: 0x272b0e00  addiu       $t3, $t9, 0xE00
    ctx->pc = 0x1ceb8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 3584));
    // 0x1ceb90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ceb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ceb94: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x1ceb94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1ceb98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ceb98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ceb9c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1ceba0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1ceba0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceba4: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x1ceba4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x1ceba8: 0x240e001f  addiu       $t6, $zero, 0x1F
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1cebac: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1cebacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebb0: 0x6b5825  or          $t3, $v1, $t3
    ctx->pc = 0x1cebb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x1cebb4: 0x0  nop
    ctx->pc = 0x1cebb4u;
    // NOP
label_1cebb8:
    // 0x1cebb8: 0xeb03c  dsll32      $s6, $t6, 0
    ctx->pc = 0x1cebb8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1cebbc: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x1cebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1cebc0: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x1cebc0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1cebc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cebc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cebc8: 0x16b438  dsll        $s6, $s6, 16
    ctx->pc = 0x1cebc8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << 16);
    // 0x1cebcc: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x1cebccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x1cebd0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1cebd4: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x1cebd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cebd8: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1cebdc: 0xfc960000  sd          $s6, 0x0($a0)
    ctx->pc = 0x1cebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 22));
    // 0x1cebe0: 0x2de30010  sltiu       $v1, $t7, 0x10
    ctx->pc = 0x1cebe0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cebe4: 0xfc950008  sd          $s5, 0x8($a0)
    ctx->pc = 0x1cebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 21));
    // 0x1cebe8: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x1cebec: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1cebecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1cebf0: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1cebf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1cebf4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cebf8: 0xfc940000  sd          $s4, 0x0($a0)
    ctx->pc = 0x1cebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 20));
    // 0x1cebfc: 0xfc930008  sd          $s3, 0x8($a0)
    ctx->pc = 0x1cebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 19));
    // 0x1cec00: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1cec00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1cec04: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1cec04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1cec08: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cec0c: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x1cec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x1cec10: 0xfc970008  sd          $s7, 0x8($a0)
    ctx->pc = 0x1cec10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 23));
    // 0x1cec14: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CEC14u;
    {
        const bool branch_taken_0x1cec14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC14u;
        // 0x1cec18: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec14) {
            ctx->pc = 0x1CEBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cebb8;
        }
    }
    ctx->pc = 0x1CEC1Cu;
    // 0x1cec1c: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x1cec1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_1cec20:
    // 0x1cec20: 0x2f030004  sltiu       $v1, $t8, 0x4
    ctx->pc = 0x1cec20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cec24: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x1CEC24u;
    {
        const bool branch_taken_0x1cec24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC24u;
        // 0x1cec28: 0x3c033a00  lui         $v1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec24) {
            ctx->pc = 0x1CEAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ceab0;
        }
    }
    ctx->pc = 0x1CEC2Cu;
    // 0x1cec2c: 0x3c0a0005  lui         $t2, 0x5
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5 << 16));
    // 0x1cec30: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x1cec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1cec34: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1cec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cec38: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1cec38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1cec3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cec3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cec40: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1cec40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1cec44: 0x240d0019  addiu       $t5, $zero, 0x19
    ctx->pc = 0x1cec44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cec48: 0x8c2ef014  lw          $t6, -0xFEC($at)
    ctx->pc = 0x1cec48u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81F014u));
    // 0x1cec4c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1cec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1cec50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cec54: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x1cec54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cec58: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1cec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1cec5c: 0x354b020b  ori         $t3, $t2, 0x20B
    ctx->pc = 0x1cec5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)523);
    // 0x1cec60: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1cec60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cec64: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cec68: 0x24080061  addiu       $t0, $zero, 0x61
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1cec6c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1cec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cec70: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1cec70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cec74: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1cec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cec78: 0xddce0040  ld          $t6, 0x40($t6)
    ctx->pc = 0x1cec78u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x1cec7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cec80: 0xfc8e0010  sd          $t6, 0x10($a0)
    ctx->pc = 0x1cec80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 14));
    // 0x1cec84: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x1cec84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x1cec88: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cec8c: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1cec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1cec90: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x1cec90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
    // 0x1cec94: 0xfc8b0010  sd          $t3, 0x10($a0)
    ctx->pc = 0x1cec94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 11));
    // 0x1cec98: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1cec98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1cec9c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ceca0: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1ceca0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1ceca4: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ceca4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ceca8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ceca8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1cecac: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x1cecacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x1cecb0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cecb4: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1cecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1cecb8: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1cecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1cecbc: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1cecc0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1cecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1cecc4: 0x32f02  srl         $a1, $v1, 28
    ctx->pc = 0x1cecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1cecc8: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x1cecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x1ceccc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1cecccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cecd0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CECD0u;
    {
        const bool branch_taken_0x1cecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CECD0u;
        // 0x1cecd4: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cecd0) {
            ctx->pc = 0x1CED20u;
            goto label_1ced20;
        }
    }
    ctx->pc = 0x1CECD8u;
    // 0x1cecd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cecdc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CECDCu;
    {
        const bool branch_taken_0x1cecdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cecdc) {
            ctx->pc = 0x1CECF8u;
            goto label_1cecf8;
        }
    }
    ctx->pc = 0x1CECE4u;
    // 0x1cece4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CECE4u;
    {
        const bool branch_taken_0x1cece4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cece4) {
            ctx->pc = 0x1CECF8u;
            goto label_1cecf8;
        }
    }
    ctx->pc = 0x1CECECu;
    // 0x1cecec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CECECu;
    {
        const bool branch_taken_0x1cecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cecec) {
            ctx->pc = 0x1CED58u;
            goto label_1ced58;
        }
    }
    ctx->pc = 0x1CECF4u;
    // 0x1cecf4: 0x0  nop
    ctx->pc = 0x1cecf4u;
    // NOP
label_1cecf8:
    // 0x1cecf8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cecfc: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1cecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ced00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CED00u;
    {
        const bool branch_taken_0x1ced00 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED00u;
        // 0x1ced04: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced00) {
            ctx->pc = 0x1CED10u;
            goto label_1ced10;
        }
    }
    ctx->pc = 0x1CED08u;
    // 0x1ced08: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ced08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ced0c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ced0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ced10:
    // 0x1ced10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ced10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ced14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CED14u;
    {
        const bool branch_taken_0x1ced14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED14u;
        // 0x1ced18: 0x305effff  andi        $fp, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced14) {
            ctx->pc = 0x1CED58u;
            goto label_1ced58;
        }
    }
    ctx->pc = 0x1CED1Cu;
    // 0x1ced1c: 0x0  nop
    ctx->pc = 0x1ced1cu;
    // NOP
label_1ced20:
    // 0x1ced20: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ced20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ced24: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ced28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CED28u;
    {
        const bool branch_taken_0x1ced28 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED28u;
        // 0x1ced2c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced28) {
            ctx->pc = 0x1CED38u;
            goto label_1ced38;
        }
    }
    ctx->pc = 0x1CED30u;
    // 0x1ced30: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ced34: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ced38:
    // 0x1ced38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ced3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ced40: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1ced40u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ced44: 0x0  nop
    ctx->pc = 0x1ced44u;
    // NOP
    // 0x1ced48: 0x0  nop
    ctx->pc = 0x1ced48u;
    // NOP
    // 0x1ced4c: 0x1012  mflo        $v0
    ctx->pc = 0x1ced4cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ced50: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ced50u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ced54: 0x0  nop
    ctx->pc = 0x1ced54u;
    // NOP
label_1ced58:
    // 0x1ced58: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1ced58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1ced5c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x1ced5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ced60: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1ced60u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced64: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ced64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ced68: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x1ced68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1ced6c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ced70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CED70u;
    {
        const bool branch_taken_0x1ced70 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED70u;
        // 0x1ced74: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced70) {
            ctx->pc = 0x1CED80u;
            goto label_1ced80;
        }
    }
    ctx->pc = 0x1CED78u;
    // 0x1ced78: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ced7c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ced7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1ced80:
    // 0x1ced80: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1ced80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ced84: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1ced88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ced88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ced8c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1ced8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1ced90: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ced90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1ced94: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x1ced94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x1ced98: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1ced98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ced9c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CED9Cu;
    {
        const bool branch_taken_0x1ced9c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED9Cu;
        // 0x1ceda0: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced9c) {
            ctx->pc = 0x1CEDACu;
            goto label_1cedac;
        }
    }
    ctx->pc = 0x1CEDA4u;
    // 0x1ceda4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1ceda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1ceda8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cedac:
    // 0x1cedac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1cedacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cedb0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1cedb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cedb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1cedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1cedb8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1cedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1cedbc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1cedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cedc0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1cedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1cedc4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1cedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cedc8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cedcc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1cedccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1cedd0: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x1cedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x1cedd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cedd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cedd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cedd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ceddc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ceddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cede0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cede0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cede4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cede4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cede8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cede8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cedec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cedecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cedf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cedf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cedf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cedf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cedf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDF8u;
        // 0x1cedfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEE00u;
}
