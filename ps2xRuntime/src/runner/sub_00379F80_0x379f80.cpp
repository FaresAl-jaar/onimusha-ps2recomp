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

// Function: sub_00379F80
// Address: 0x379f80 - 0x37a060
void sub_00379F80_0x379f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379F80_0x379f80");
#endif

    switch (ctx->pc) {
        case 0x37a010u: goto label_37a010;
        default: break;
    }

    ctx->pc = 0x379f80u;

    // 0x379f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x379f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x379f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379f8c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x379f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x379f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379f98: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x379F98u;
    {
        const bool branch_taken_0x379f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x379f98) {
            ctx->pc = 0x379FD8u;
            goto label_379fd8;
        }
    }
    ctx->pc = 0x379FA0u;
    // 0x379fa0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x379FA0u;
    {
        const bool branch_taken_0x379fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379fa0) {
            ctx->pc = 0x379FB0u;
            goto label_379fb0;
        }
    }
    ctx->pc = 0x379FA8u;
    // 0x379fa8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x379FA8u;
    {
        const bool branch_taken_0x379fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379fa8) {
            ctx->pc = 0x37A050u;
            goto label_37a050;
        }
    }
    ctx->pc = 0x379FB0u;
label_379fb0:
    // 0x379fb0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x379fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x379fb4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x379fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379fb8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x379fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x379fbc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x379fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x379fc0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379fc4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x379fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x379fc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379fcc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x379fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x379fd0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x379fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x379fd4: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x379fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_379fd8:
    // 0x379fd8: 0x86032b86  lh          $v1, 0x2B86($s0)
    ctx->pc = 0x379fd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11142)));
    // 0x379fdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379FDCu;
    {
        const bool branch_taken_0x379fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379fdc) {
            ctx->pc = 0x379FF0u;
            goto label_379ff0;
        }
    }
    ctx->pc = 0x379FE4u;
    // 0x379fe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x379fe8: 0xa6032b86  sh          $v1, 0x2B86($s0)
    ctx->pc = 0x379fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11142), (uint16_t)GPR_U32(ctx, 3));
    // 0x379fec: 0x0  nop
    ctx->pc = 0x379fecu;
    // NOP
label_379ff0:
    // 0x379ff0: 0x86032b86  lh          $v1, 0x2B86($s0)
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11142)));
    // 0x379ff4: 0x1c600016  bgtz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x379FF4u;
    {
        const bool branch_taken_0x379ff4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379ff4) {
            ctx->pc = 0x37A050u;
            goto label_37a050;
        }
    }
    ctx->pc = 0x379FFCu;
    // 0x379ffc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x379ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x37a000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a004: 0x34423e00  ori         $v0, $v0, 0x3E00
    ctx->pc = 0x37a004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15872);
    // 0x37a008: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A008u;
    SET_GPR_U32(ctx, 31, 0x37A010u);
    ctx->pc = 0x37A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A008u;
    // 0x37a00c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A008u, 0x37A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A010u;
label_37a010:
    // 0x37a010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a014: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37A014u;
    {
        const bool branch_taken_0x37a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x37a014) {
            ctx->pc = 0x37A040u;
            goto label_37a040;
        }
    }
    ctx->pc = 0x37A01Cu;
    // 0x37a01c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A01Cu;
    {
        const bool branch_taken_0x37a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a01c) {
            ctx->pc = 0x37A030u;
            goto label_37a030;
        }
    }
    ctx->pc = 0x37A024u;
    // 0x37a024: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A024u;
    {
        const bool branch_taken_0x37a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a024) {
            ctx->pc = 0x37A048u;
            goto label_37a048;
        }
    }
    ctx->pc = 0x37A02Cu;
    // 0x37a02c: 0x0  nop
    ctx->pc = 0x37a02cu;
    // NOP
label_37a030:
    // 0x37a030: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x37a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x37a034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37A034u;
    {
        const bool branch_taken_0x37a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A034u;
        // 0x37a038: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a034) {
            ctx->pc = 0x37A048u;
            goto label_37a048;
        }
    }
    ctx->pc = 0x37A03Cu;
    // 0x37a03c: 0x0  nop
    ctx->pc = 0x37a03cu;
    // NOP
label_37a040:
    // 0x37a040: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x37a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x37a044: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37a044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_37a048:
    // 0x37a048: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37A048u;
    {
        const bool branch_taken_0x37a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a048) {
            ctx->pc = 0x37A050u;
            goto label_37a050;
        }
    }
    ctx->pc = 0x37A050u;
label_37a050:
    // 0x37a050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a058: 0x3e00008  jr          $ra
    ctx->pc = 0x37A058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A058u;
        // 0x37a05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A060u;
}
