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

// Function: sub_0025C0F0
// Address: 0x25c0f0 - 0x25c1f8
void sub_0025C0F0_0x25c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C0F0_0x25c0f0");
#endif

    ctx->pc = 0x25c0f0u;

    // 0x25c0f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x25c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x25c0f4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C0F4u;
    {
        const bool branch_taken_0x25c0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C0F4u;
        // 0x25c0f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c0f4) {
            ctx->pc = 0x25C108u;
            goto label_25c108;
        }
    }
    ctx->pc = 0x25C0FCu;
    // 0x25c0fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25C0FCu;
    {
        const bool branch_taken_0x25c0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c0fc) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C104u;
    // 0x25c104: 0x0  nop
    ctx->pc = 0x25c104u;
    // NOP
label_25c108:
    // 0x25c108: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x25c108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x25c10c: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x25c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x25c110: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x25c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x25c114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C114u;
    {
        const bool branch_taken_0x25c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C114u;
        // 0x25c118: 0x9783881c  lhu         $v1, -0x77E4($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c114) {
            ctx->pc = 0x25C128u;
            goto label_25c128;
        }
    }
    ctx->pc = 0x25C11Cu;
    // 0x25c11c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25C11Cu;
    {
        const bool branch_taken_0x25c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C11Cu;
        // 0x25c120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c11c) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C124u;
    // 0x25c124: 0x0  nop
    ctx->pc = 0x25c124u;
    // NOP
label_25c128:
    // 0x25c128: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25c12c: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x25C12Cu;
    {
        const bool branch_taken_0x25c12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C12Cu;
        // 0x25c130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c12c) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C134u;
    // 0x25c134: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x25C134u;
    {
        const bool branch_taken_0x25c134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c134) {
            ctx->pc = 0x25C1D8u;
            goto label_25c1d8;
        }
    }
    ctx->pc = 0x25C13Cu;
    // 0x25c13c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c140: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x25C140u;
    {
        const bool branch_taken_0x25c140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C140u;
        // 0x25c144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c140) {
            ctx->pc = 0x25C1B0u;
            goto label_25c1b0;
        }
    }
    ctx->pc = 0x25C148u;
    // 0x25c148: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25C148u;
    {
        const bool branch_taken_0x25c148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x25c148) {
            ctx->pc = 0x25C188u;
            goto label_25c188;
        }
    }
    ctx->pc = 0x25C150u;
    // 0x25c150: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C150u;
    {
        const bool branch_taken_0x25c150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c150) {
            ctx->pc = 0x25C160u;
            goto label_25c160;
        }
    }
    ctx->pc = 0x25C158u;
    // 0x25c158: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25C158u;
    {
        const bool branch_taken_0x25c158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c158) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C160u;
label_25c160:
    // 0x25c160: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C160u;
    {
        const bool branch_taken_0x25c160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C160u;
        // 0x25c164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c160) {
            ctx->pc = 0x25C170u;
            goto label_25c170;
        }
    }
    ctx->pc = 0x25C168u;
    // 0x25c168: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25C168u;
    {
        const bool branch_taken_0x25c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c168) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C170u;
label_25c170:
    // 0x25c170: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x25c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x25c174: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x25C174u;
    {
        const bool branch_taken_0x25c174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C174u;
        // 0x25c178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c174) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C17Cu;
    // 0x25c17c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25C17Cu;
    {
        const bool branch_taken_0x25c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c17c) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C184u;
    // 0x25c184: 0x0  nop
    ctx->pc = 0x25c184u;
    // NOP
label_25c188:
    // 0x25c188: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C188u;
    {
        const bool branch_taken_0x25c188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C188u;
        // 0x25c18c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c188) {
            ctx->pc = 0x25C198u;
            goto label_25c198;
        }
    }
    ctx->pc = 0x25C190u;
    // 0x25c190: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25C190u;
    {
        const bool branch_taken_0x25c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c190) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C198u;
label_25c198:
    // 0x25c198: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25c19c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25C19Cu;
    {
        const bool branch_taken_0x25c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C19Cu;
        // 0x25c1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c19c) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C1A4u;
    // 0x25c1a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25C1A4u;
    {
        const bool branch_taken_0x25c1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1a4) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C1ACu;
    // 0x25c1ac: 0x0  nop
    ctx->pc = 0x25c1acu;
    // NOP
label_25c1b0:
    // 0x25c1b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C1B0u;
    {
        const bool branch_taken_0x25c1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1B0u;
        // 0x25c1b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1b0) {
            ctx->pc = 0x25C1C0u;
            goto label_25c1c0;
        }
    }
    ctx->pc = 0x25C1B8u;
    // 0x25c1b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C1B8u;
    {
        const bool branch_taken_0x25c1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1b8) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C1C0u;
label_25c1c0:
    // 0x25c1c0: 0x30a20400  andi        $v0, $a1, 0x400
    ctx->pc = 0x25c1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x25c1c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C1C4u;
    {
        const bool branch_taken_0x25c1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1C4u;
        // 0x25c1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1c4) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C1CCu;
    // 0x25c1cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C1CCu;
    {
        const bool branch_taken_0x25c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1cc) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C1D4u;
    // 0x25c1d4: 0x0  nop
    ctx->pc = 0x25c1d4u;
    // NOP
label_25c1d8:
    // 0x25c1d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C1D8u;
    {
        const bool branch_taken_0x25c1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C1D8u;
        // 0x25c1dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c1d8) {
            ctx->pc = 0x25C1E8u;
            goto label_25c1e8;
        }
    }
    ctx->pc = 0x25C1E0u;
    // 0x25c1e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25C1E0u;
    {
        const bool branch_taken_0x25c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1e0) {
            ctx->pc = 0x25C1F0u;
            goto label_25c1f0;
        }
    }
    ctx->pc = 0x25C1E8u;
label_25c1e8:
    // 0x25c1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c1ec: 0x0  nop
    ctx->pc = 0x25c1ecu;
    // NOP
label_25c1f0:
    // 0x25c1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x25C1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C1F8u;
}
