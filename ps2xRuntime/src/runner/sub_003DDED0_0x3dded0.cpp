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

// Function: sub_003DDED0
// Address: 0x3dded0 - 0x3ddfbc
void sub_003DDED0_0x3dded0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDED0_0x3dded0");
#endif

    switch (ctx->pc) {
        case 0x3ddf20u: goto label_3ddf20;
        case 0x3ddf48u: goto label_3ddf48;
        case 0x3ddf70u: goto label_3ddf70;
        default: break;
    }

    ctx->pc = 0x3dded0u;

    // 0x3dded0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dded0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3dded4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3dded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3dded8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3dded8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3ddedc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ddedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ddee0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ddee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddee4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ddee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ddee8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ddee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddeec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ddeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ddef0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ddef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ddef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ddef8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ddef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddefc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3ddefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ddf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf04: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x3ddf04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x3ddf08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ddf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ddf0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf10: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3ddf10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3ddf14: 0x2508de60  addiu       $t0, $t0, -0x21A0
    ctx->pc = 0x3ddf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958688));
    // 0x3ddf18: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3DDF18u;
    SET_GPR_U32(ctx, 31, 0x3DDF20u);
    ctx->pc = 0x3DDF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF18u;
    // 0x3ddf1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3DDF18u, 0x3DDF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF20u;
label_3ddf20:
    // 0x3ddf20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ddf20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf24: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3DDF24u;
    {
        const bool branch_taken_0x3ddf24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF24u;
        // 0x3ddf28: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf24) {
            ctx->pc = 0x3DDF90u;
            goto label_3ddf90;
        }
    }
    ctx->pc = 0x3DDF2Cu;
    // 0x3ddf2c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3ddf2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf30: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3ddf30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf34: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3ddf34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf3c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3ddf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3ddf40: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3DDF40u;
    SET_GPR_U32(ctx, 31, 0x3DDF48u);
    ctx->pc = 0x3DDF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF40u;
    // 0x3ddf44: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3DDF40u, 0x3DDF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF48u;
label_3ddf48:
    // 0x3ddf48: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3ddf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3ddf4c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3ddf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3ddf50: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3ddf50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ddf54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ddf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf58: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3ddf58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ddf5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ddf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ddf60: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3ddf60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ddf64: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3ddf64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ddf68: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3DDF68u;
    SET_GPR_U32(ctx, 31, 0x3DDF70u);
    ctx->pc = 0x3DDF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDF68u;
    // 0x3ddf6c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3DDF68u, 0x3DDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDF70u;
label_3ddf70:
    // 0x3ddf70: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3ddf70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3ddf74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ddf78: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3ddf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3ddf7c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3ddf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3ddf80: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x3ddf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ddf84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF84u;
    {
        const bool branch_taken_0x3ddf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF84u;
        // 0x3ddf88: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf84) {
            ctx->pc = 0x3DDF98u;
            goto label_3ddf98;
        }
    }
    ctx->pc = 0x3DDF8Cu;
    // 0x3ddf8c: 0x0  nop
    ctx->pc = 0x3ddf8cu;
    // NOP
label_3ddf90:
    // 0x3ddf90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ddf90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ddf94: 0x0  nop
    ctx->pc = 0x3ddf94u;
    // NOP
label_3ddf98:
    // 0x3ddf98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3ddf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ddf9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ddf9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ddfa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ddfa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ddfa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ddfa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ddfa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ddfa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ddfac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ddfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ddfb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ddfb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ddfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFB4u;
        // 0x3ddfb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDFBCu;
}
