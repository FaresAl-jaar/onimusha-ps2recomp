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

// Function: sub_001D2920
// Address: 0x1d2920 - 0x1d2a54
void sub_001D2920_0x1d2920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2920_0x1d2920");
#endif

    switch (ctx->pc) {
        case 0x1d2938u: goto label_1d2938;
        case 0x1d29e8u: goto label_1d29e8;
        default: break;
    }

    ctx->pc = 0x1d2920u;

    // 0x1d2920: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d2920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1d2924: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x1d2924u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x1d2928: 0x25088010  addiu       $t0, $t0, -0x7FF0
    ctx->pc = 0x1d2928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934544));
    // 0x1d292c: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x1d292cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1d2930: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d2934: 0x0  nop
    ctx->pc = 0x1d2934u;
    // NOP
label_1d2938:
    // 0x1d2938: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1d2938u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d293c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d2940: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1d2940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1d2944: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1d2944u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1d2948: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1d2948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1d294c: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x1d294cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x1d2950: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D2950u;
    {
        const bool branch_taken_0x1d2950 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x1D2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2950u;
        // 0x1d2954: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2950) {
            ctx->pc = 0x1D2938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2938;
        }
    }
    ctx->pc = 0x1D2958u;
    // 0x1d2958: 0xdd030000  ld          $v1, 0x0($t0)
    ctx->pc = 0x1d2958u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d295c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d2960: 0x30a28000  andi        $v0, $a1, 0x8000
    ctx->pc = 0x1d2960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1d2964: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1d2964u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1d2968: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x1d2968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F014u));
    // 0x1d296c: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x1d296cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d2970: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D2970u;
    {
        const bool branch_taken_0x1d2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2970u;
        // 0x1d2974: 0xffa300a0  sd          $v1, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2970) {
            ctx->pc = 0x1D29A0u;
            goto label_1d29a0;
        }
    }
    ctx->pc = 0x1D2978u;
    // 0x1d2978: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1d2978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1d297c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d2980: 0x9026cea4  lbu         $a2, -0x315C($at)
    ctx->pc = 0x1d2980u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1d2984: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d2984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d2988: 0x6180a  movz        $v1, $zero, $a2
    ctx->pc = 0x1d2988u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1d298c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d298cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d2990: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2990u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d2994: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d2998: 0xffa20078  sd          $v0, 0x78($sp)
    ctx->pc = 0x1d2998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
    // 0x1d299c: 0x0  nop
    ctx->pc = 0x1d299cu;
    // NOP
label_1d29a0:
    // 0x1d29a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1d29a4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1d29a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d29a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D29A8u;
    {
        const bool branch_taken_0x1d29a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A8u;
        // 0x1d29ac: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29a8) {
            ctx->pc = 0x1D29D0u;
            goto label_1d29d0;
        }
    }
    ctx->pc = 0x1D29B0u;
    // 0x1d29b0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d29b4: 0x9026cea4  lbu         $a2, -0x315C($at)
    ctx->pc = 0x1d29b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x1d29b8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d29bc: 0x6180a  movz        $v1, $zero, $a2
    ctx->pc = 0x1d29bcu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1d29c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d29c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d29c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d29c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1d29c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1d29c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d29cc: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x1d29ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
label_1d29d0:
    // 0x1d29d0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1d29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x1d29d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d29d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d29d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29dc: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x1d29dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1d29e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d29e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29e4: 0x24635b60  addiu       $v1, $v1, 0x5B60
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23392));
label_1d29e8:
    // 0x1d29e8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1d29e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1d29ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D29ECu;
    {
        const bool branch_taken_0x1d29ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29ec) {
            ctx->pc = 0x1D2A10u;
            goto label_1d2a10;
        }
    }
    ctx->pc = 0x1D29F4u;
    // 0x1d29f4: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x1d29f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d29f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d29f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d29fc: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1d29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x1d2a00: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1d2a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2a04: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x1d2a04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x1d2a08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d2a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d2a0c: 0x0  nop
    ctx->pc = 0x1d2a0cu;
    // NOP
label_1d2a10:
    // 0x1d2a10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d2a14: 0x29220015  slti        $v0, $t1, 0x15
    ctx->pc = 0x1d2a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1d2a18: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d2a1c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d2a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d2a20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1D2A20u;
    {
        const bool branch_taken_0x1d2a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A20u;
        // 0x1d2a24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a20) {
            ctx->pc = 0x1D29E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29e8;
        }
    }
    ctx->pc = 0x1D2A28u;
    // 0x1d2a28: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x1d2a28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1d2a2c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1d2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1d2a30: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1d2a30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1d2a34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d2a38: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d2a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1d2a3c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d2a40: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1d2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1d2a44: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d2a48: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1d2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1d2a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A4Cu;
        // 0x1d2a50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2A54u;
}
