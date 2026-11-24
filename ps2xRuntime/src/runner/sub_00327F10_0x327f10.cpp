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

// Function: sub_00327F10
// Address: 0x327f10 - 0x327ffc
void sub_00327F10_0x327f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327F10_0x327f10");
#endif

    switch (ctx->pc) {
        case 0x327f60u: goto label_327f60;
        case 0x327f88u: goto label_327f88;
        case 0x327fb0u: goto label_327fb0;
        default: break;
    }

    ctx->pc = 0x327f10u;

    // 0x327f10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x327f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x327f14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x327f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x327f18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x327f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x327f1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x327f20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x327f20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x327f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x327f28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x327f28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x327f30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x327f30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327f38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x327f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x327f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x327f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f44: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x327f44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x327f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f50: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x327f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x327f54: 0x25087ea0  addiu       $t0, $t0, 0x7EA0
    ctx->pc = 0x327f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32416));
    // 0x327f58: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x327F58u;
    SET_GPR_U32(ctx, 31, 0x327F60u);
    ctx->pc = 0x327F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F58u;
    // 0x327f5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x327F58u, 0x327F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F60u;
label_327f60:
    // 0x327f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f64: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x327F64u;
    {
        const bool branch_taken_0x327f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F64u;
        // 0x327f68: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f64) {
            ctx->pc = 0x327FD0u;
            goto label_327fd0;
        }
    }
    ctx->pc = 0x327F6Cu;
    // 0x327f6c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x327f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f70: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x327f70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f74: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x327f74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f7c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x327f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x327f80: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x327F80u;
    SET_GPR_U32(ctx, 31, 0x327F88u);
    ctx->pc = 0x327F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F80u;
    // 0x327f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x327F80u, 0x327F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F88u;
label_327f88:
    // 0x327f88: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x327f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x327f8c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x327f90: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x327f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x327f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327f98: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x327f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x327f9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327fa0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x327fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x327fa4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x327fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x327fa8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x327FA8u;
    SET_GPR_U32(ctx, 31, 0x327FB0u);
    ctx->pc = 0x327FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FA8u;
    // 0x327fac: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x327FA8u, 0x327FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FB0u;
label_327fb0:
    // 0x327fb0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x327fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x327fb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x327fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x327fb8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x327fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x327fbc: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x327fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x327fc0: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x327fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x327fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327FC4u;
    {
        const bool branch_taken_0x327fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FC4u;
        // 0x327fc8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fc4) {
            ctx->pc = 0x327FD8u;
            goto label_327fd8;
        }
    }
    ctx->pc = 0x327FCCu;
    // 0x327fcc: 0x0  nop
    ctx->pc = 0x327fccu;
    // NOP
label_327fd0:
    // 0x327fd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fd4: 0x0  nop
    ctx->pc = 0x327fd4u;
    // NOP
label_327fd8:
    // 0x327fd8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x327fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x327fdc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x327fdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x327fe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x327fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x327fe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x327fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x327FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FF4u;
        // 0x327ff8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327FFCu;
}
