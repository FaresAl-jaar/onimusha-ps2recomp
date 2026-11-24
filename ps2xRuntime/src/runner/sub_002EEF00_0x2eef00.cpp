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

// Function: sub_002EEF00
// Address: 0x2eef00 - 0x2eefb0
void sub_002EEF00_0x2eef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEF00_0x2eef00");
#endif

    switch (ctx->pc) {
        case 0x2eef1cu: goto label_2eef1c;
        case 0x2eefa0u: goto label_2eefa0;
        default: break;
    }

    ctx->pc = 0x2eef00u;

    // 0x2eef00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eef04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eef04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eef0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eef0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eef14: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x2EEF14u;
    SET_GPR_U32(ctx, 31, 0x2EEF1Cu);
    ctx->pc = 0x2EEF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF14u;
    // 0x2eef18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x2EEF14u, 0x2EEF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEF1Cu;
label_2eef1c:
    // 0x2eef1c: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x2eef1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2eef20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eef24: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EEF24u;
    {
        const bool branch_taken_0x2eef24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF24u;
        // 0x2eef28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef24) {
            ctx->pc = 0x2EEF90u;
            goto label_2eef90;
        }
    }
    ctx->pc = 0x2EEF2Cu;
    // 0x2eef2c: 0x10a40014  beq         $a1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EEF2Cu;
    {
        const bool branch_taken_0x2eef2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eef2c) {
            ctx->pc = 0x2EEF80u;
            goto label_2eef80;
        }
    }
    ctx->pc = 0x2EEF34u;
    // 0x2eef34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF34u;
    {
        const bool branch_taken_0x2eef34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef34) {
            ctx->pc = 0x2EEF48u;
            goto label_2eef48;
        }
    }
    ctx->pc = 0x2EEF3Cu;
    // 0x2eef3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EEF3Cu;
    {
        const bool branch_taken_0x2eef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eef3c) {
            ctx->pc = 0x2EEFA0u;
            goto label_2eefa0;
        }
    }
    ctx->pc = 0x2EEF44u;
    // 0x2eef44: 0x0  nop
    ctx->pc = 0x2eef44u;
    // NOP
label_2eef48:
    // 0x2eef48: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2eef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2eef4c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2eef4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eef50: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEF50u;
    {
        const bool branch_taken_0x2eef50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF50u;
        // 0x2eef54: 0x24030094  addiu       $v1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef50) {
            ctx->pc = 0x2EEF60u;
            goto label_2eef60;
        }
    }
    ctx->pc = 0x2EEF58u;
    // 0x2eef58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EEF58u;
    {
        const bool branch_taken_0x2eef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF58u;
        // 0x2eef5c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef58) {
            ctx->pc = 0x2EEFA0u;
            goto label_2eefa0;
        }
    }
    ctx->pc = 0x2EEF60u;
label_2eef60:
    // 0x2eef60: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2eef60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef64: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2eef64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2eef68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2eef6c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2eef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eef70: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2eef70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2eef74: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2eef74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eef78: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2eef78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2eef7c: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2eef7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_2eef80:
    // 0x2eef80: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2eef80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2eef84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEF84u;
    {
        const bool branch_taken_0x2eef84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF84u;
        // 0x2eef88: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef84) {
            ctx->pc = 0x2EEFA0u;
            goto label_2eefa0;
        }
    }
    ctx->pc = 0x2EEF8Cu;
    // 0x2eef8c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2eef8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2eef90:
    // 0x2eef90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEF90u;
    {
        const bool branch_taken_0x2eef90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF90u;
        // 0x2eef94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef90) {
            ctx->pc = 0x2EEFA0u;
            goto label_2eefa0;
        }
    }
    ctx->pc = 0x2EEF98u;
    // 0x2eef98: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x2EEF98u;
    SET_GPR_U32(ctx, 31, 0x2EEFA0u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x2EEF98u, 0x2EEFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFA0u;
label_2eefa0:
    // 0x2eefa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2eefa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eefa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eefa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eefa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFA8u;
        // 0x2eefac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEFB0u;
}
