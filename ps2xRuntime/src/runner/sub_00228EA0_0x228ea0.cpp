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

// Function: sub_00228EA0
// Address: 0x228ea0 - 0x228f14
void sub_00228EA0_0x228ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228EA0_0x228ea0");
#endif

    ctx->pc = 0x228ea0u;

    // 0x228ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228ea4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x228EA4u;
    {
        const bool branch_taken_0x228ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EA4u;
        // 0x228ea8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ea4) {
            ctx->pc = 0x228EC0u;
            goto label_228ec0;
        }
    }
    ctx->pc = 0x228EACu;
    // 0x228eac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228eb4: 0x248498d0  addiu       $a0, $a0, -0x6730
    ctx->pc = 0x228eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940880));
    // 0x228eb8: 0x808a0d4  j           func_228350
    ctx->pc = 0x228EB8u;
    ctx->pc = 0x228EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228EB8u;
    // 0x228ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228EC0u;
label_228ec0:
    // 0x228ec0: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x228EC0u;
    {
        const bool branch_taken_0x228ec0 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x228EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228EC0u;
        // 0x228ec4: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228ec0) {
            ctx->pc = 0x228EE0u;
            goto label_228ee0;
        }
    }
    ctx->pc = 0x228EC8u;
    // 0x228ec8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228ed0: 0x248498f8  addiu       $a0, $a0, -0x6708
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940920));
    // 0x228ed4: 0x808a0d4  j           func_228350
    ctx->pc = 0x228ED4u;
    ctx->pc = 0x228ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228ED4u;
    // 0x228ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228EDCu;
    // 0x228edc: 0x0  nop
    ctx->pc = 0x228edcu;
    // NOP
label_228ee0:
    // 0x228ee0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x228ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x228ee4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x228ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x228ee8: 0x34633280  ori         $v1, $v1, 0x3280
    ctx->pc = 0x228ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12928);
    // 0x228eec: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x228eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x228ef0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x228ef0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x228ef4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x228EF4u;
    {
        const bool branch_taken_0x228ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ef4) {
            ctx->pc = 0x228EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228EF4u;
            // 0x228ef8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x228EFCu;
            goto label_228efc;
        }
    }
    ctx->pc = 0x228EFCu;
label_228efc:
    // 0x228efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228f00: 0x1812  mflo        $v1
    ctx->pc = 0x228f00u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x228f04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x228f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x228f08: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x228f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x228f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x228F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F0Cu;
        // 0x228f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228F14u;
}
