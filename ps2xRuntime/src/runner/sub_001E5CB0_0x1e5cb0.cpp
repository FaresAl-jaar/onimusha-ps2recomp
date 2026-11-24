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

// Function: sub_001E5CB0
// Address: 0x1e5cb0 - 0x1e5e50
void sub_001E5CB0_0x1e5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5CB0_0x1e5cb0");
#endif

    switch (ctx->pc) {
        case 0x1e5cf4u: goto label_1e5cf4;
        case 0x1e5d48u: goto label_1e5d48;
        case 0x1e5d58u: goto label_1e5d58;
        case 0x1e5d6cu: goto label_1e5d6c;
        case 0x1e5e08u: goto label_1e5e08;
        case 0x1e5e30u: goto label_1e5e30;
        default: break;
    }

    ctx->pc = 0x1e5cb0u;

    // 0x1e5cb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e5cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e5cb4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e5cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e5cbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e5cc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5ccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e5cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5cd0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e5cd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5cd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5CD4u;
    {
        const bool branch_taken_0x1e5cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CD4u;
        // 0x1e5cd8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cd4) {
            ctx->pc = 0x1E5CE8u;
            goto label_1e5ce8;
        }
    }
    ctx->pc = 0x1E5CDCu;
    // 0x1e5cdc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1E5CDCu;
    {
        const bool branch_taken_0x1e5cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CDCu;
        // 0x1e5ce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cdc) {
            ctx->pc = 0x1E5E38u;
            goto label_1e5e38;
        }
    }
    ctx->pc = 0x1E5CE4u;
    // 0x1e5ce4: 0x0  nop
    ctx->pc = 0x1e5ce4u;
    // NOP
label_1e5ce8:
    // 0x1e5ce8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e5cec: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1E5CECu;
    SET_GPR_U32(ctx, 31, 0x1E5CF4u);
    ctx->pc = 0x1E5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CECu;
    // 0x1e5cf0: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1E5CECu, 0x1E5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CF4u;
label_1e5cf4:
    // 0x1e5cf4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5cf8: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e5cfc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e5cfcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e5d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5d04: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5d08: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e5d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5d0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e5d10: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5d14: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x1e5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x1e5d18: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e5d18u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e5d1c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5d20: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x1e5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x1e5d24: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e5d24u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e5d28: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e5d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e5d2c: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x1e5d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x1e5d30: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e5d30u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e5d34: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e5d34u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e5d38: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1e5d38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1e5d3c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e5d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e5d40: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E5D40u;
    SET_GPR_U32(ctx, 31, 0x1E5D48u);
    ctx->pc = 0x1E5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D40u;
    // 0x1e5d44: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E5D40u, 0x1E5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D48u;
label_1e5d48:
    // 0x1e5d48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5d4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e5d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d50: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E5D50u;
    SET_GPR_U32(ctx, 31, 0x1E5D58u);
    ctx->pc = 0x1E5D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D50u;
    // 0x1e5d54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E5D50u, 0x1E5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D58u;
label_1e5d58:
    // 0x1e5d58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e5d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5d5c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e5d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e5d60: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e5d64: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E5D64u;
    SET_GPR_U32(ctx, 31, 0x1E5D6Cu);
    ctx->pc = 0x1E5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D64u;
    // 0x1e5d68: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E5D64u, 0x1E5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D6Cu;
label_1e5d6c:
    // 0x1e5d6c: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x1e5d6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e5d70: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x1e5d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e5d74: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e5d78: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1e5d78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1e5d7c: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x1e5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e5d80: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x1e5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1e5d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d88: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x1e5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x1e5d8c: 0x7a430060  lq          $v1, 0x60($s2)
    ctx->pc = 0x1e5d8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1e5d90: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x1e5d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x1e5d94: 0x7a430070  lq          $v1, 0x70($s2)
    ctx->pc = 0x1e5d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1e5d98: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x1e5d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x1e5d9c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e5da0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1e5da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5da4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e5da8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1e5da8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1e5dac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5db0: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x1e5db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5db4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e5db4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e5db8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1e5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1e5dbc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5dc0: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1e5dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e5dc4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x1e5dc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1e5dcc: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x1e5dccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1e5dd0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E5DD0u;
    {
        const bool branch_taken_0x1e5dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5dd0) {
            ctx->pc = 0x1E5E10u;
            goto label_1e5e10;
        }
    }
    ctx->pc = 0x1E5DD8u;
    // 0x1e5dd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5DD8u;
    {
        const bool branch_taken_0x1e5dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5dd8) {
            ctx->pc = 0x1E5DE8u;
            goto label_1e5de8;
        }
    }
    ctx->pc = 0x1E5DE0u;
    // 0x1e5de0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5DE0u;
    {
        const bool branch_taken_0x1e5de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5de0) {
            ctx->pc = 0x1E5E30u;
            goto label_1e5e30;
        }
    }
    ctx->pc = 0x1E5DE8u;
label_1e5de8:
    // 0x1e5de8: 0x92460032  lbu         $a2, 0x32($s2)
    ctx->pc = 0x1e5de8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1e5dec: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x1e5decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5df0: 0x92470031  lbu         $a3, 0x31($s2)
    ctx->pc = 0x1e5df0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1e5df4: 0xc64d003c  lwc1        $f13, 0x3C($s2)
    ctx->pc = 0x1e5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e5df8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5dfc: 0xc64e004c  lwc1        $f14, 0x4C($s2)
    ctx->pc = 0x1e5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e5e00: 0xc0b9894  jal         func_2E6250
    ctx->pc = 0x1E5E00u;
    SET_GPR_U32(ctx, 31, 0x1E5E08u);
    ctx->pc = 0x1E5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E00u;
    // 0x1e5e04: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6250u, 0x1E5E00u, 0x1E5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E08u;
label_1e5e08:
    // 0x1e5e08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5E08u;
    {
        const bool branch_taken_0x1e5e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e08) {
            ctx->pc = 0x1E5E30u;
            goto label_1e5e30;
        }
    }
    ctx->pc = 0x1E5E10u;
label_1e5e10:
    // 0x1e5e10: 0x92460032  lbu         $a2, 0x32($s2)
    ctx->pc = 0x1e5e10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1e5e14: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x1e5e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5e18: 0x92470031  lbu         $a3, 0x31($s2)
    ctx->pc = 0x1e5e18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1e5e1c: 0xc64d003c  lwc1        $f13, 0x3C($s2)
    ctx->pc = 0x1e5e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e5e20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e5e24: 0xc64e004c  lwc1        $f14, 0x4C($s2)
    ctx->pc = 0x1e5e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e5e28: 0xc0b9948  jal         func_2E6520
    ctx->pc = 0x1E5E28u;
    SET_GPR_U32(ctx, 31, 0x1E5E30u);
    ctx->pc = 0x1E5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E28u;
    // 0x1e5e2c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6520u, 0x1E5E28u, 0x1E5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E30u;
label_1e5e30:
    // 0x1e5e30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e5e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e34: 0x0  nop
    ctx->pc = 0x1e5e34u;
    // NOP
label_1e5e38:
    // 0x1e5e38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e5e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5e3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E48u;
        // 0x1e5e4c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5E50u;
}
