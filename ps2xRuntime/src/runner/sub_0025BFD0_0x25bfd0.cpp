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

// Function: sub_0025BFD0
// Address: 0x25bfd0 - 0x25c0f0
void sub_0025BFD0_0x25bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BFD0_0x25bfd0");
#endif

    ctx->pc = 0x25bfd0u;

    // 0x25bfd0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25bfd4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BFD4u;
    {
        const bool branch_taken_0x25bfd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFD4u;
        // 0x25bfd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfd4) {
            ctx->pc = 0x25BFE8u;
            goto label_25bfe8;
        }
    }
    ctx->pc = 0x25BFDCu;
    // 0x25bfdc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x25BFDCu;
    {
        const bool branch_taken_0x25bfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bfdc) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25BFE4u;
    // 0x25bfe4: 0x0  nop
    ctx->pc = 0x25bfe4u;
    // NOP
label_25bfe8:
    // 0x25bfe8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x25bfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x25bfec: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x25bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x25bff0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x25bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x25bff4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x25bff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25bff8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25BFF8u;
    {
        const bool branch_taken_0x25bff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BFF8u;
        // 0x25bffc: 0x9783881c  lhu         $v1, -0x77E4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bff8) {
            ctx->pc = 0x25C008u;
            goto label_25c008;
        }
    }
    ctx->pc = 0x25C000u;
    // 0x25c000: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x25C000u;
    {
        const bool branch_taken_0x25c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C000u;
        // 0x25c004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c000) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C008u;
label_25c008:
    // 0x25c008: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25c00c: 0x10820034  beq         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x25C00Cu;
    {
        const bool branch_taken_0x25c00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C00Cu;
        // 0x25c010: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c00c) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C014u;
    // 0x25c014: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25C014u;
    {
        const bool branch_taken_0x25c014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c014) {
            ctx->pc = 0x25C0B8u;
            goto label_25c0b8;
        }
    }
    ctx->pc = 0x25C01Cu;
    // 0x25c01c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c020: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C020u;
    {
        const bool branch_taken_0x25c020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C020u;
        // 0x25c024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c020) {
            ctx->pc = 0x25C090u;
            goto label_25c090;
        }
    }
    ctx->pc = 0x25C028u;
    // 0x25c028: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C028u;
    {
        const bool branch_taken_0x25c028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c028) {
            ctx->pc = 0x25C068u;
            goto label_25c068;
        }
    }
    ctx->pc = 0x25C030u;
    // 0x25c030: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C030u;
    {
        const bool branch_taken_0x25c030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c030) {
            ctx->pc = 0x25C040u;
            goto label_25c040;
        }
    }
    ctx->pc = 0x25C038u;
    // 0x25c038: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x25C038u;
    {
        const bool branch_taken_0x25c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c038) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C040u;
label_25c040:
    // 0x25c040: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25c040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25c044: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x25c044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25c048: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C048u;
    {
        const bool branch_taken_0x25c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C048u;
        // 0x25c04c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c048) {
            ctx->pc = 0x25C058u;
            goto label_25c058;
        }
    }
    ctx->pc = 0x25C050u;
    // 0x25c050: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25C050u;
    {
        const bool branch_taken_0x25c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c050) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C058u;
label_25c058:
    // 0x25c058: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x25C058u;
    {
        const bool branch_taken_0x25c058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C058u;
        // 0x25c05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c058) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C060u;
    // 0x25c060: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25C060u;
    {
        const bool branch_taken_0x25c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c060) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C068u;
label_25c068:
    // 0x25c068: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x25c068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x25c06c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C06Cu;
    {
        const bool branch_taken_0x25c06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C06Cu;
        // 0x25c070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c06c) {
            ctx->pc = 0x25C080u;
            goto label_25c080;
        }
    }
    ctx->pc = 0x25C074u;
    // 0x25c074: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25C074u;
    {
        const bool branch_taken_0x25c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c074) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C07Cu;
    // 0x25c07c: 0x0  nop
    ctx->pc = 0x25c07cu;
    // NOP
label_25c080:
    // 0x25c080: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x25C080u;
    {
        const bool branch_taken_0x25c080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C080u;
        // 0x25c084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c080) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C088u;
    // 0x25c088: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25C088u;
    {
        const bool branch_taken_0x25c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c088) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C090u;
label_25c090:
    // 0x25c090: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x25c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x25c094: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x25c094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25c098: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C098u;
    {
        const bool branch_taken_0x25c098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C098u;
        // 0x25c09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c098) {
            ctx->pc = 0x25C0A8u;
            goto label_25c0a8;
        }
    }
    ctx->pc = 0x25C0A0u;
    // 0x25c0a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25C0A0u;
    {
        const bool branch_taken_0x25c0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0a0) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C0A8u;
label_25c0a8:
    // 0x25c0a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25C0A8u;
    {
        const bool branch_taken_0x25c0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0A8u;
        // 0x25c0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0a8) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C0B0u;
    // 0x25c0b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C0B0u;
    {
        const bool branch_taken_0x25c0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0b0) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C0B8u;
label_25c0b8:
    // 0x25c0b8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x25c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x25c0bc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x25c0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x25c0c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C0C0u;
    {
        const bool branch_taken_0x25c0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0C0u;
        // 0x25c0c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0c0) {
            ctx->pc = 0x25C0D0u;
            goto label_25c0d0;
        }
    }
    ctx->pc = 0x25C0C8u;
    // 0x25c0c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C0C8u;
    {
        const bool branch_taken_0x25c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0c8) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C0D0u;
label_25c0d0:
    // 0x25c0d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C0D0u;
    {
        const bool branch_taken_0x25c0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0D0u;
        // 0x25c0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0d0) {
            ctx->pc = 0x25C0E0u;
            goto label_25c0e0;
        }
    }
    ctx->pc = 0x25C0D8u;
    // 0x25c0d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25C0D8u;
    {
        const bool branch_taken_0x25c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0d8) {
            ctx->pc = 0x25C0E8u;
            goto label_25c0e8;
        }
    }
    ctx->pc = 0x25C0E0u;
label_25c0e0:
    // 0x25c0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c0e4: 0x0  nop
    ctx->pc = 0x25c0e4u;
    // NOP
label_25c0e8:
    // 0x25c0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25C0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C0F0u;
}
