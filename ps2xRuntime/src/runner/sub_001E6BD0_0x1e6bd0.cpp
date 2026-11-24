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

// Function: sub_001E6BD0
// Address: 0x1e6bd0 - 0x1e6d30
void sub_001E6BD0_0x1e6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6BD0_0x1e6bd0");
#endif

    switch (ctx->pc) {
        case 0x1e6c14u: goto label_1e6c14;
        case 0x1e6c68u: goto label_1e6c68;
        case 0x1e6c78u: goto label_1e6c78;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6d14u: goto label_1e6d14;
        default: break;
    }

    ctx->pc = 0x1e6bd0u;

    // 0x1e6bd0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e6bd4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e6bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e6bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6be4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6bec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e6becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bf0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6bf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6BF4u;
    {
        const bool branch_taken_0x1e6bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BF4u;
        // 0x1e6bf8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bf4) {
            ctx->pc = 0x1E6C08u;
            goto label_1e6c08;
        }
    }
    ctx->pc = 0x1E6BFCu;
    // 0x1e6bfc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1E6BFCu;
    {
        const bool branch_taken_0x1e6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BFCu;
        // 0x1e6c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6bfc) {
            ctx->pc = 0x1E6D18u;
            goto label_1e6d18;
        }
    }
    ctx->pc = 0x1E6C04u;
    // 0x1e6c04: 0x0  nop
    ctx->pc = 0x1e6c04u;
    // NOP
label_1e6c08:
    // 0x1e6c08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e6c0c: 0xc076538  jal         func_1D94E0
    ctx->pc = 0x1E6C0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C14u);
    ctx->pc = 0x1E6C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C0Cu;
    // 0x1e6c10: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94E0u, 0x1E6C0Cu, 0x1E6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C14u;
label_1e6c14:
    // 0x1e6c14: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6c18: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x1e6c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e6c1c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e6c1cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e6c20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6c24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6c28: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e6c2c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e6c30: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6c34: 0x7fa90080  sq          $t1, 0x80($sp)
    ctx->pc = 0x1e6c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 9));
    // 0x1e6c38: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e6c38u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e6c3c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6c40: 0x7fa80090  sq          $t0, 0x90($sp)
    ctx->pc = 0x1e6c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 8));
    // 0x1e6c44: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e6c44u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e6c48: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e6c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e6c4c: 0x7fa700a0  sq          $a3, 0xA0($sp)
    ctx->pc = 0x1e6c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 7));
    // 0x1e6c50: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e6c50u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e6c54: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e6c58: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x1e6c58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1e6c5c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e6c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e6c60: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6C60u;
    SET_GPR_U32(ctx, 31, 0x1E6C68u);
    ctx->pc = 0x1E6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C60u;
    // 0x1e6c64: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6C60u, 0x1E6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C68u;
label_1e6c68:
    // 0x1e6c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e6c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c70: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6C70u;
    SET_GPR_U32(ctx, 31, 0x1E6C78u);
    ctx->pc = 0x1E6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C70u;
    // 0x1e6c74: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6C70u, 0x1E6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C78u;
label_1e6c78:
    // 0x1e6c78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6c7c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e6c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e6c80: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e6c84: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E6C84u;
    SET_GPR_U32(ctx, 31, 0x1E6C8Cu);
    ctx->pc = 0x1E6C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C84u;
    // 0x1e6c88: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E6C84u, 0x1E6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C8Cu;
label_1e6c8c:
    // 0x1e6c8c: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x1e6c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e6c90: 0x103c3c  dsll32      $a3, $s0, 16
    ctx->pc = 0x1e6c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e6c94: 0x27a8010c  addiu       $t0, $sp, 0x10C
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1e6c98: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1e6c98u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1e6c9c: 0x27a6011c  addiu       $a2, $sp, 0x11C
    ctx->pc = 0x1e6c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1e6ca0: 0x27a3012c  addiu       $v1, $sp, 0x12C
    ctx->pc = 0x1e6ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x1e6ca4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e6ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e6ca8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1e6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e6cac: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1e6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1e6cb0: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1e6cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1e6cb4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1e6cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1e6cb8: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x1e6cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x1e6cbc: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1e6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1e6cc0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e6cc4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6cc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6cc8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6ccc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1e6cd0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e6cd4: 0x70471018  mult1       $v0, $v0, $a3
    ctx->pc = 0x1e6cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6cd8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6cdc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e6ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e6ce4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1e6ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6ce8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6cec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e6cf0: 0x92430033  lbu         $v1, 0x33($s2)
    ctx->pc = 0x1e6cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1e6cf4: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x1e6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6cf8: 0x92420034  lbu         $v0, 0x34($s2)
    ctx->pc = 0x1e6cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1e6cfc: 0xc64d003c  lwc1        $f13, 0x3C($s2)
    ctx->pc = 0x1e6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e6d00: 0x92460032  lbu         $a2, 0x32($s2)
    ctx->pc = 0x1e6d00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1e6d04: 0x92490031  lbu         $t1, 0x31($s2)
    ctx->pc = 0x1e6d04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1e6d08: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1e6d08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6d0c: 0xc0b97b4  jal         func_2E5ED0
    ctx->pc = 0x1E6D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D14u);
    ctx->pc = 0x1E6D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D0Cu;
    // 0x1e6d10: 0x24100  sll         $t0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5ED0u, 0x1E6D0Cu, 0x1E6D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D14u;
label_1e6d14:
    // 0x1e6d14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d18:
    // 0x1e6d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e6d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6d28: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D28u;
        // 0x1e6d2c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6D30u;
}
