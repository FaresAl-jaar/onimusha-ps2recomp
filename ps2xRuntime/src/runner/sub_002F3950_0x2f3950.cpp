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

// Function: sub_002F3950
// Address: 0x2f3950 - 0x2f39c0
void sub_002F3950_0x2f3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3950_0x2f3950");
#endif

    switch (ctx->pc) {
        case 0x2f3978u: goto label_2f3978;
        default: break;
    }

    ctx->pc = 0x2f3950u;

    // 0x2f3950: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f3950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f3954: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x2f3954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f3958: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2f3958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f395c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2f395cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2f3960: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f3960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f3964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f3964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3968: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2f3968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f396c: 0x24c690c0  addiu       $a2, $a2, -0x6F40
    ctx->pc = 0x2f396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938816));
    // 0x2f3970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f3970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3974: 0x0  nop
    ctx->pc = 0x2f3974u;
    // NOP
label_2f3978:
    // 0x2f3978: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2f3978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f397c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F397Cu;
    {
        const bool branch_taken_0x2f397c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F397Cu;
        // 0x2f3980: 0x24e30226  addiu       $v1, $a3, 0x226 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f397c) {
            ctx->pc = 0x2F3998u;
            goto label_2f3998;
        }
    }
    ctx->pc = 0x2F3984u;
    // 0x2f3984: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x2f3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f3988: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f398c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F398Cu;
    {
        const bool branch_taken_0x2f398c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F398Cu;
        // 0x2f3990: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f398c) {
            ctx->pc = 0x2F39B8u;
            goto label_2f39b8;
        }
    }
    ctx->pc = 0x2F3994u;
    // 0x2f3994: 0x0  nop
    ctx->pc = 0x2f3994u;
    // NOP
label_2f3998:
    // 0x2f3998: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2f3998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2f399c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f39a0: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2f39a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f39a4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2f39a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2f39a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F39A8u;
    {
        const bool branch_taken_0x2f39a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39A8u;
        // 0x2f39ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39a8) {
            ctx->pc = 0x2F3978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3978;
        }
    }
    ctx->pc = 0x2F39B0u;
    // 0x2f39b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f39b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f39b4: 0x0  nop
    ctx->pc = 0x2f39b4u;
    // NOP
label_2f39b8:
    // 0x2f39b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F39B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F39B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F39C0u;
}
