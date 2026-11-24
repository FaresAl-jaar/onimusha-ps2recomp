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

// Function: sub_00398E10
// Address: 0x398e10 - 0x398f20
void sub_00398E10_0x398e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398E10_0x398e10");
#endif

    switch (ctx->pc) {
        case 0x398e68u: goto label_398e68;
        case 0x398e84u: goto label_398e84;
        case 0x398ea4u: goto label_398ea4;
        case 0x398eccu: goto label_398ecc;
        default: break;
    }

    ctx->pc = 0x398e10u;

    // 0x398e10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x398e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x398e14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x398e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x398e18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x398e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x398e1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x398e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x398e20: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x398e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x398e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x398e28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x398e28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x398e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x398e30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x398e30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x398e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x398e38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x398e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x398e40: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x398e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x398e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x398e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e4c: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x398e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x398e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e58: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x398e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x398e5c: 0x25088da0  addiu       $t0, $t0, -0x7260
    ctx->pc = 0x398e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938016));
    // 0x398e60: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x398E60u;
    SET_GPR_U32(ctx, 31, 0x398E68u);
    ctx->pc = 0x398E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E60u;
    // 0x398e64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x398E60u, 0x398E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E68u;
label_398e68:
    // 0x398e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e6c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x398E6Cu;
    {
        const bool branch_taken_0x398e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x398E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398E6Cu;
        // 0x398e70: 0x322700ff  andi        $a3, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x398e6c) {
            ctx->pc = 0x398EF0u;
            goto label_398ef0;
        }
    }
    ctx->pc = 0x398E74u;
    // 0x398e74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x398e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x398e78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x398e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e7c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x398E7Cu;
    SET_GPR_U32(ctx, 31, 0x398E84u);
    ctx->pc = 0x398E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E7Cu;
    // 0x398e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x398E7Cu, 0x398E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398E84u;
label_398e84:
    // 0x398e84: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x398e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e88: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x398e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e8c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x398e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e90: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x398e90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398e98: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x398e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x398e9c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x398E9Cu;
    SET_GPR_U32(ctx, 31, 0x398EA4u);
    ctx->pc = 0x398EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398E9Cu;
    // 0x398ea0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x398E9Cu, 0x398EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398EA4u;
label_398ea4:
    // 0x398ea4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x398ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x398ea8: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x398ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x398eac: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x398eacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x398eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398eb4: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x398eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x398eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398ebc: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x398ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x398ec0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x398ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x398ec4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x398EC4u;
    SET_GPR_U32(ctx, 31, 0x398ECCu);
    ctx->pc = 0x398EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398EC4u;
    // 0x398ec8: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x398EC4u, 0x398ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398ECCu;
label_398ecc:
    // 0x398ecc: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x398eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x398ed0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x398ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x398ed4: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x398ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x398ed8: 0xa2160558  sb          $s6, 0x558($s0)
    ctx->pc = 0x398ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 22));
    // 0x398edc: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x398edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x398ee0: 0xa211055a  sb          $s1, 0x55A($s0)
    ctx->pc = 0x398ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1370), (uint8_t)GPR_U32(ctx, 17));
    // 0x398ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x398EE4u;
    {
        const bool branch_taken_0x398ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398EE4u;
        // 0x398ee8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ee4) {
            ctx->pc = 0x398EF8u;
            goto label_398ef8;
        }
    }
    ctx->pc = 0x398EECu;
    // 0x398eec: 0x0  nop
    ctx->pc = 0x398eecu;
    // NOP
label_398ef0:
    // 0x398ef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x398ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398ef4: 0x0  nop
    ctx->pc = 0x398ef4u;
    // NOP
label_398ef8:
    // 0x398ef8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x398ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x398efc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x398efcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x398f00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x398f00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x398f04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x398f04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398f08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x398f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398f0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x398f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398f10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398f14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398f18: 0x3e00008  jr          $ra
    ctx->pc = 0x398F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398F18u;
        // 0x398f1c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398F20u;
}
