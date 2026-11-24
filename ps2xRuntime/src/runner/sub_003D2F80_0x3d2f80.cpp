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

// Function: sub_003D2F80
// Address: 0x3d2f80 - 0x3d30ac
void sub_003D2F80_0x3d2f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2F80_0x3d2f80");
#endif

    switch (ctx->pc) {
        case 0x3d2fe0u: goto label_3d2fe0;
        case 0x3d3008u: goto label_3d3008;
        case 0x3d3030u: goto label_3d3030;
        case 0x3d3070u: goto label_3d3070;
        default: break;
    }

    ctx->pc = 0x3d2f80u;

    // 0x3d2f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d2f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d2f84: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3d2f88: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3d2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3d2f8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3d2f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3d2f90: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3d2f90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d2f98: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3d2f98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2f9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d2fa0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d2fa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fa4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d2fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d2fa8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3d2fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d2facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d2fb0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3d2fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fb4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3d2fb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d2fbc: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d2fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d2fc0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3d2fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d2fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d2fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fd0: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3d2fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3d2fd4: 0x25082f10  addiu       $t0, $t0, 0x2F10
    ctx->pc = 0x3d2fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12048));
    // 0x3d2fd8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D2FD8u;
    SET_GPR_U32(ctx, 31, 0x3D2FE0u);
    ctx->pc = 0x3D2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2FD8u;
    // 0x3d2fdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D2FD8u, 0x3D2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2FE0u;
label_3d2fe0:
    // 0x3d2fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d2fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2fe4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D2FE4u;
    {
        const bool branch_taken_0x3d2fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2FE4u;
        // 0x3d2fe8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2fe4) {
            ctx->pc = 0x3D3078u;
            goto label_3d3078;
        }
    }
    ctx->pc = 0x3D2FECu;
    // 0x3d2fec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3d2fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ff0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3d2ff0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ff4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3d2ff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d2ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ffc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d2ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d3000: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D3000u;
    SET_GPR_U32(ctx, 31, 0x3D3008u);
    ctx->pc = 0x3D3004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3000u;
    // 0x3d3004: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D3000u, 0x3D3008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3008u;
label_3d3008:
    // 0x3d3008: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3d3008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3d300c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d300cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d3010: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3d3010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d3014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3018: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d3018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d301c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d3020: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d3020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d3024: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d3024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3028: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D3028u;
    SET_GPR_U32(ctx, 31, 0x3D3030u);
    ctx->pc = 0x3D302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3028u;
    // 0x3d302c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D3028u, 0x3D3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3030u;
label_3d3030:
    // 0x3d3030: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3d3030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3d3034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d3034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d3038: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3d3038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3d303c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3d303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3d3040: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3d3040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3d3044: 0xa2110568  sb          $s1, 0x568($s0)
    ctx->pc = 0x3d3044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d3048: 0xa2170569  sb          $s7, 0x569($s0)
    ctx->pc = 0x3d3048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 23));
    // 0x3d304c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d304cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d3050: 0xa200056a  sb          $zero, 0x56A($s0)
    ctx->pc = 0x3d3050u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1386), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d3054: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3d3054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3d3058: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d3058u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d305c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3d305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3060: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x3d3060u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x3d3064: 0x78225c70  lq          $v0, 0x5C70($at)
    ctx->pc = 0x3d3064u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C70u));
    // 0x3d3068: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D3068u;
    SET_GPR_U32(ctx, 31, 0x3D3070u);
    ctx->pc = 0x3D306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3068u;
    // 0x3d306c: 0x7e020550  sq          $v0, 0x550($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D3068u, 0x3D3070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3070u;
label_3d3070:
    // 0x3d3070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D3070u;
    {
        const bool branch_taken_0x3d3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3070u;
        // 0x3d3074: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3070) {
            ctx->pc = 0x3D3080u;
            goto label_3d3080;
        }
    }
    ctx->pc = 0x3D3078u;
label_3d3078:
    // 0x3d3078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d3078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d307c: 0x0  nop
    ctx->pc = 0x3d307cu;
    // NOP
label_3d3080:
    // 0x3d3080: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d3080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d3084: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3d3084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d3088: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3d3088u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d308c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d308cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d3090: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d3090u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d3094: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d3094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d3098: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d3098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d309c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d309cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d30a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d30a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d30a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D30A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D30A4u;
        // 0x3d30a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D30A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D30ACu;
}
