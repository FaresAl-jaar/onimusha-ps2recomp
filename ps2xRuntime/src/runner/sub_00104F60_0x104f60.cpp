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

// Function: sub_00104F60
// Address: 0x104f60 - 0x104fdc
void sub_00104F60_0x104f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104F60_0x104f60");
#endif

    switch (ctx->pc) {
        case 0x104fb8u: goto label_104fb8;
        default: break;
    }

    ctx->pc = 0x104f60u;

    // 0x104f60: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x104f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x104f64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x104f68: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x104f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x104f6c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x104f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x104f70: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x104f74: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x104f78: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x104f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104f7c: 0x623806  srlv        $a3, $v0, $v1
    ctx->pc = 0x104f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x104f80: 0x71027  nor         $v0, $zero, $a3
    ctx->pc = 0x104f80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x104f84: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x104f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x104f88: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x104f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x104f8c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x104f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x104f90: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x104f90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x104f94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x104F94u;
    {
        const bool branch_taken_0x104f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x104F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104F94u;
        // 0x104f98: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104f94) {
            ctx->pc = 0x104FA0u;
            goto label_104fa0;
        }
    }
    ctx->pc = 0x104F9Cu;
    // 0x104f9c: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x104f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_104fa0:
    // 0x104fa0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x104fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x104fa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104FA4u;
    {
        const bool branch_taken_0x104fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FA4u;
        // 0x104fa8: 0x24a30004  addiu       $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fa4) {
            ctx->pc = 0x104FD4u;
            goto label_104fd4;
        }
    }
    ctx->pc = 0x104FACu;
    // 0x104fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x104FACu;
    {
        const bool branch_taken_0x104fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104FACu;
        // 0x104fb0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104fac) {
            ctx->pc = 0x104FC4u;
            goto label_104fc4;
        }
    }
    ctx->pc = 0x104FB4u;
    // 0x104fb4: 0x0  nop
    ctx->pc = 0x104fb4u;
    // NOP
label_104fb8:
    // 0x104fb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x104fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fbc: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x104fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104fc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x104fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_104fc4:
    // 0x104fc4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x104fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x104fc8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x104fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x104fcc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104FCCu;
    {
        const bool branch_taken_0x104fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104fcc) {
            ctx->pc = 0x104FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104fb8;
        }
    }
    ctx->pc = 0x104FD4u;
label_104fd4:
    // 0x104fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x104FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104FDCu;
}
