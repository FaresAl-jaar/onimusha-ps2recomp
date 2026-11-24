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

// Function: sub_00214E90
// Address: 0x214e90 - 0x214f60
void sub_00214E90_0x214e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214E90_0x214e90");
#endif

    switch (ctx->pc) {
        case 0x214ec0u: goto label_214ec0;
        case 0x214f20u: goto label_214f20;
        default: break;
    }

    ctx->pc = 0x214e90u;

    // 0x214e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214e94: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x214e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214e9c: 0x8d221fc0  lw          $v0, 0x1FC0($t1)
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8128)));
    // 0x214ea0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214EA0u;
    {
        const bool branch_taken_0x214ea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EA0u;
        // 0x214ea4: 0x24481080  addiu       $t0, $v0, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ea0) {
            ctx->pc = 0x214EB8u;
            goto label_214eb8;
        }
    }
    ctx->pc = 0x214EA8u;
    // 0x214ea8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x214EA8u;
    {
        const bool branch_taken_0x214ea8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ea8) {
            ctx->pc = 0x214EB8u;
            goto label_214eb8;
        }
    }
    ctx->pc = 0x214EB0u;
    // 0x214eb0: 0x54e00005  bnel        $a3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x214EB0u;
    {
        const bool branch_taken_0x214eb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x214eb0) {
            ctx->pc = 0x214EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214EB0u;
            // 0x214eb4: 0x8d22002c  lw          $v0, 0x2C($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214EC8u;
            goto label_214ec8;
        }
    }
    ctx->pc = 0x214EB8u;
label_214eb8:
    // 0x214eb8: 0xc08652a  jal         func_2194A8
    ctx->pc = 0x214EB8u;
    SET_GPR_U32(ctx, 31, 0x214EC0u);
    ctx->pc = 0x214EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EB8u;
    // 0x214ebc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2194A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2194A8u, 0x214EB8u, 0x214EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EC0u;
label_214ec0:
    // 0x214ec0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x214EC0u;
    {
        const bool branch_taken_0x214ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214EC0u;
        // 0x214ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ec0) {
            ctx->pc = 0x214F54u;
            goto label_214f54;
        }
    }
    ctx->pc = 0x214EC8u;
label_214ec8:
    // 0x214ec8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x214ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x214ecc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x214eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214ed0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x214ED0u;
    {
        const bool branch_taken_0x214ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214ed0) {
            ctx->pc = 0x214ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214ED0u;
            // 0x214ed4: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214EF0u;
            goto label_214ef0;
        }
    }
    ctx->pc = 0x214ED8u;
    // 0x214ed8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ee0: 0x34a50f1d  ori         $a1, $a1, 0xF1D
    ctx->pc = 0x214ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3869);
    // 0x214ee4: 0x80848e0  j           func_212380
    ctx->pc = 0x214EE4u;
    ctx->pc = 0x214EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EE4u;
    // 0x214ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214EECu;
    // 0x214eec: 0x0  nop
    ctx->pc = 0x214eecu;
    // NOP
label_214ef0:
    // 0x214ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ef4: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x214ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x214ef8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x214ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x214efc: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x214efcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x214f00: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x214f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x214f04: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x214f04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x214f08: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x214f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x214f0c: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x214f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x214f10: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x214f10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x214f14: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x214f14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x214f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x214F18u;
    {
        const bool branch_taken_0x214f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F18u;
        // 0x214f1c: 0x28c90011  slti        $t1, $a2, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f18) {
            ctx->pc = 0x214F3Cu;
            goto label_214f3c;
        }
    }
    ctx->pc = 0x214F20u;
label_214f20:
    // 0x214f20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x214f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x214f24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x214f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x214f28: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x214f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x214f2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x214f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f30: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x214f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x214f34: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x214f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x214f38: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x214f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_214f3c:
    // 0x214f3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x214f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x214f40: 0xc9100b  movn        $v0, $a2, $t1
    ctx->pc = 0x214f40u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x214f44: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x214f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x214f48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x214F48u;
    {
        const bool branch_taken_0x214f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F48u;
        // 0x214f4c: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f48) {
            ctx->pc = 0x214F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214f20;
        }
    }
    ctx->pc = 0x214F50u;
    // 0x214f50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214f54:
    // 0x214f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f58: 0x3e00008  jr          $ra
    ctx->pc = 0x214F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F58u;
        // 0x214f5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F60u;
}
