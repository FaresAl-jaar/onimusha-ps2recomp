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

// Function: sub_00178CA0
// Address: 0x178ca0 - 0x178d78
void sub_00178CA0_0x178ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178CA0_0x178ca0");
#endif

    ctx->pc = 0x178ca0u;

    // 0x178ca0: 0x90830007  lbu         $v1, 0x7($a0)
    ctx->pc = 0x178ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x178ca4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x178CA4u;
    {
        const bool branch_taken_0x178ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ca4) {
            ctx->pc = 0x178CF0u;
            goto label_178cf0;
        }
    }
    ctx->pc = 0x178CACu;
    // 0x178cac: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x178cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178cb0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x178CB0u;
    {
        const bool branch_taken_0x178cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178cb0) {
            ctx->pc = 0x178CD8u;
            goto label_178cd8;
        }
    }
    ctx->pc = 0x178CB8u;
    // 0x178cb8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x178cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x178cbc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x178cbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x178cc0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x178CC0u;
    {
        const bool branch_taken_0x178cc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x178CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CC0u;
        // 0x178cc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cc0) {
            ctx->pc = 0x178CF0u;
            goto label_178cf0;
        }
    }
    ctx->pc = 0x178CC8u;
    // 0x178cc8: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x178cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x178ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178CCCu;
    {
        const bool branch_taken_0x178ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CCCu;
        // 0x178cd0: 0xa0800007  sb          $zero, 0x7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ccc) {
            ctx->pc = 0x178CF0u;
            goto label_178cf0;
        }
    }
    ctx->pc = 0x178CD4u;
    // 0x178cd4: 0x0  nop
    ctx->pc = 0x178cd4u;
    // NOP
label_178cd8:
    // 0x178cd8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x178cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x178cdc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178CDCu;
    {
        const bool branch_taken_0x178cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x178cdc) {
            ctx->pc = 0x178CF0u;
            goto label_178cf0;
        }
    }
    ctx->pc = 0x178CE4u;
    // 0x178ce4: 0xa0800006  sb          $zero, 0x6($a0)
    ctx->pc = 0x178ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x178ce8: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x178ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x178cec: 0x0  nop
    ctx->pc = 0x178cecu;
    // NOP
label_178cf0:
    // 0x178cf0: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x178cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x178cf4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x178CF4u;
    {
        const bool branch_taken_0x178cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178cf4) {
            ctx->pc = 0x178D48u;
            goto label_178d48;
        }
    }
    ctx->pc = 0x178CFCu;
    // 0x178cfc: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x178cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178d00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D00u;
    {
        const bool branch_taken_0x178d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d00) {
            ctx->pc = 0x178D10u;
            goto label_178d10;
        }
    }
    ctx->pc = 0x178D08u;
    // 0x178d08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178D08u;
    {
        const bool branch_taken_0x178d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D08u;
        // 0x178d0c: 0x8c830098  lw          $v1, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d08) {
            ctx->pc = 0x178D14u;
            goto label_178d14;
        }
    }
    ctx->pc = 0x178D10u;
label_178d10:
    // 0x178d10: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x178d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_178d14:
    // 0x178d14: 0xac832df0  sw          $v1, 0x2DF0($a0)
    ctx->pc = 0x178d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11760), GPR_U32(ctx, 3));
    // 0x178d18: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x178d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178d1c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x178D1Cu;
    {
        const bool branch_taken_0x178d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178d1c) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178D24u;
    // 0x178d24: 0x8c850098  lw          $a1, 0x98($a0)
    ctx->pc = 0x178d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x178d28: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x178d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x178d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x178D2Cu;
    {
        const bool branch_taken_0x178d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D2Cu;
        // 0x178d30: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d2c) {
            ctx->pc = 0x178D40u;
            goto label_178d40;
        }
    }
    ctx->pc = 0x178D34u;
label_178d34:
    // 0x178d34: 0x8c850094  lw          $a1, 0x94($a0)
    ctx->pc = 0x178d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x178d38: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x178d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x178d3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x178d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_178d40:
    // 0x178d40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x178D40u;
    {
        const bool branch_taken_0x178d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D40u;
        // 0x178d44: 0xac832df4  sw          $v1, 0x2DF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d40) {
            ctx->pc = 0x178D70u;
            goto label_178d70;
        }
    }
    ctx->pc = 0x178D48u;
label_178d48:
    // 0x178d48: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x178d48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178d4c: 0x3c0501d0  lui         $a1, 0x1D0
    ctx->pc = 0x178d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)464 << 16));
    // 0x178d50: 0x3c0601e0  lui         $a2, 0x1E0
    ctx->pc = 0x178d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)480 << 16));
    // 0x178d54: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x178d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x178d58: 0xc7280a  movz        $a1, $a2, $a3
    ctx->pc = 0x178d58u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x178d5c: 0xac852df0  sw          $a1, 0x2DF0($a0)
    ctx->pc = 0x178d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11760), GPR_U32(ctx, 5));
    // 0x178d60: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x178d60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178d64: 0x65300a  movz        $a2, $v1, $a1
    ctx->pc = 0x178d64u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x178d68: 0xac862df4  sw          $a2, 0x2DF4($a0)
    ctx->pc = 0x178d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11764), GPR_U32(ctx, 6));
    // 0x178d6c: 0x0  nop
    ctx->pc = 0x178d6cu;
    // NOP
label_178d70:
    // 0x178d70: 0x3e00008  jr          $ra
    ctx->pc = 0x178D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D78u;
}
