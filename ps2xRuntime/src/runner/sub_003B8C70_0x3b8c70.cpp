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

// Function: sub_003B8C70
// Address: 0x3b8c70 - 0x3b8d2c
void sub_003B8C70_0x3b8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8C70_0x3b8c70");
#endif

    switch (ctx->pc) {
        case 0x3b8c90u: goto label_3b8c90;
        case 0x3b8ca8u: goto label_3b8ca8;
        case 0x3b8cb4u: goto label_3b8cb4;
        case 0x3b8cccu: goto label_3b8ccc;
        default: break;
    }

    ctx->pc = 0x3b8c70u;

    // 0x3b8c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b8c74: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x3b8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x3b8c78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b8c7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b8c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b8c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b8c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8c88: 0xc0ee12c  jal         func_3B84B0
    ctx->pc = 0x3B8C88u;
    SET_GPR_U32(ctx, 31, 0x3B8C90u);
    ctx->pc = 0x3B8C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8C88u;
    // 0x3b8c8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B84B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B84B0u, 0x3B8C88u, 0x3B8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8C90u;
label_3b8c90:
    // 0x3b8c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8C90u;
    {
        const bool branch_taken_0x3b8c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8c90) {
            ctx->pc = 0x3B8CA0u;
            goto label_3b8ca0;
        }
    }
    ctx->pc = 0x3B8C98u;
    // 0x3b8c98: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3B8C98u;
    {
        const bool branch_taken_0x3b8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8C98u;
        // 0x3b8c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8c98) {
            ctx->pc = 0x3B8D18u;
            goto label_3b8d18;
        }
    }
    ctx->pc = 0x3B8CA0u;
label_3b8ca0:
    // 0x3b8ca0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3B8CA0u;
    SET_GPR_U32(ctx, 31, 0x3B8CA8u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3B8CA0u, 0x3B8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CA8u;
label_3b8ca8:
    // 0x3b8ca8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3b8ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3b8cac: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3B8CACu;
    SET_GPR_U32(ctx, 31, 0x3B8CB4u);
    ctx->pc = 0x3B8CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8CACu;
    // 0x3b8cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3B8CACu, 0x3B8CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CB4u;
label_3b8cb4:
    // 0x3b8cb4: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x3b8cb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b8cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8cbc: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3b8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3b8cc0: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3b8cc0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b8cc4: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3B8CC4u;
    SET_GPR_U32(ctx, 31, 0x3B8CCCu);
    ctx->pc = 0x3B8CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8CC4u;
    // 0x3b8cc8: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3B8CC4u, 0x3B8CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8CCCu;
label_3b8ccc:
    // 0x3b8ccc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3b8cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b8cd0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x3b8cd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3b8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3b8cd8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x3b8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x3b8cdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b8ce0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x3b8ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b8ce4: 0x0  nop
    ctx->pc = 0x3b8ce4u;
    // NOP
    // 0x3b8ce8: 0x0  nop
    ctx->pc = 0x3b8ce8u;
    // NOP
    // 0x3b8cec: 0x1010  mfhi        $v0
    ctx->pc = 0x3b8cecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b8cf0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3b8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3b8cf4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b8cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3b8cf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b8cfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3b8cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b8d00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8D00u;
    {
        const bool branch_taken_0x3b8d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8d00) {
            ctx->pc = 0x3B8D10u;
            goto label_3b8d10;
        }
    }
    ctx->pc = 0x3B8D08u;
    // 0x3b8d08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8D08u;
    {
        const bool branch_taken_0x3b8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D08u;
        // 0x3b8d0c: 0x2e220032  sltiu       $v0, $s1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8d08) {
            ctx->pc = 0x3B8D18u;
            goto label_3b8d18;
        }
    }
    ctx->pc = 0x3B8D10u;
label_3b8d10:
    // 0x3b8d10: 0x2e220046  sltiu       $v0, $s1, 0x46
    ctx->pc = 0x3b8d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x3b8d14: 0x0  nop
    ctx->pc = 0x3b8d14u;
    // NOP
label_3b8d18:
    // 0x3b8d18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b8d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8d24: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8D24u;
        // 0x3b8d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8D2Cu;
}
