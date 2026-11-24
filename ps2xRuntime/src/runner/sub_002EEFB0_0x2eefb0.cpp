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

// Function: sub_002EEFB0
// Address: 0x2eefb0 - 0x2ef0c8
void sub_002EEFB0_0x2eefb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEFB0_0x2eefb0");
#endif

    switch (ctx->pc) {
        case 0x2eefccu: goto label_2eefcc;
        case 0x2ef0b4u: goto label_2ef0b4;
        default: break;
    }

    ctx->pc = 0x2eefb0u;

    // 0x2eefb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eefb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eefb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2eefb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2eefbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eefbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eefc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eefc4: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x2EEFC4u;
    SET_GPR_U32(ctx, 31, 0x2EEFCCu);
    ctx->pc = 0x2EEFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFC4u;
    // 0x2eefc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x2EEFC4u, 0x2EEFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFCCu;
label_2eefcc:
    // 0x2eefcc: 0x92060821  lbu         $a2, 0x821($s0)
    ctx->pc = 0x2eefccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2eefd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2eefd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eefd4: 0x10c50030  beq         $a2, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EEFD4u;
    {
        const bool branch_taken_0x2eefd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFD4u;
        // 0x2eefd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefd4) {
            ctx->pc = 0x2EF098u;
            goto label_2ef098;
        }
    }
    ctx->pc = 0x2EEFDCu;
    // 0x2eefdc: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2EEFDCu;
    {
        const bool branch_taken_0x2eefdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFDCu;
        // 0x2eefe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefdc) {
            ctx->pc = 0x2EF060u;
            goto label_2ef060;
        }
    }
    ctx->pc = 0x2EEFE4u;
    // 0x2eefe4: 0x10c40010  beq         $a2, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EEFE4u;
    {
        const bool branch_taken_0x2eefe4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eefe4) {
            ctx->pc = 0x2EF028u;
            goto label_2ef028;
        }
    }
    ctx->pc = 0x2EEFECu;
    // 0x2eefec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEFECu;
    {
        const bool branch_taken_0x2eefec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eefec) {
            ctx->pc = 0x2EF000u;
            goto label_2ef000;
        }
    }
    ctx->pc = 0x2EEFF4u;
    // 0x2eeff4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2EEFF4u;
    {
        const bool branch_taken_0x2eeff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeff4) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EEFFCu;
    // 0x2eeffc: 0x0  nop
    ctx->pc = 0x2eeffcu;
    // NOP
label_2ef000:
    // 0x2ef000: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ef000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef004: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ef004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef008: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x2ef008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2ef00c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ef00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef010: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ef010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ef014: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ef014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef018: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ef018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ef01c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ef01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ef020: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2ef020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ef024: 0x0  nop
    ctx->pc = 0x2ef024u;
    // NOP
label_2ef028:
    // 0x2ef028: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ef028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2ef02c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EF02Cu;
    {
        const bool branch_taken_0x2ef02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef02c) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF034u;
    // 0x2ef034: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ef034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef038: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x2ef038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2ef03c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ef03cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef040: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ef044: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ef044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef048: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ef048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ef04c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ef04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef050: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ef050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ef054: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2ef054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2ef058: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EF058u;
    {
        const bool branch_taken_0x2ef058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF058u;
        // 0x2ef05c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef058) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF060u;
label_2ef060:
    // 0x2ef060: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ef060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2ef064: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EF064u;
    {
        const bool branch_taken_0x2ef064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef064) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF06Cu;
    // 0x2ef06c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ef06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef070: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ef070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ef074: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x2ef074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2ef078: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ef078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef07c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ef07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ef080: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ef080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ef084: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ef084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef088: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ef088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ef08c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EF08Cu;
    {
        const bool branch_taken_0x2ef08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF08Cu;
        // 0x2ef090: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef08c) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF094u;
    // 0x2ef094: 0x0  nop
    ctx->pc = 0x2ef094u;
    // NOP
label_2ef098:
    // 0x2ef098: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2ef098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2ef09c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF09Cu;
    {
        const bool branch_taken_0x2ef09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef09c) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF0A4u;
    // 0x2ef0a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0A4u;
    {
        const bool branch_taken_0x2ef0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0A4u;
        // 0x2ef0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0a4) {
            ctx->pc = 0x2EF0B8u;
            goto label_2ef0b8;
        }
    }
    ctx->pc = 0x2EF0ACu;
    // 0x2ef0ac: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x2EF0ACu;
    SET_GPR_U32(ctx, 31, 0x2EF0B4u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x2EF0ACu, 0x2EF0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF0B4u;
label_2ef0b4:
    // 0x2ef0b4: 0x0  nop
    ctx->pc = 0x2ef0b4u;
    // NOP
label_2ef0b8:
    // 0x2ef0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0C0u;
        // 0x2ef0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF0C8u;
}
