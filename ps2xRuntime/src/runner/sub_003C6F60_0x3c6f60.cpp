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

// Function: sub_003C6F60
// Address: 0x3c6f60 - 0x3c715c
void sub_003C6F60_0x3c6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6F60_0x3c6f60");
#endif

    switch (ctx->pc) {
        case 0x3c7010u: goto label_3c7010;
        case 0x3c704cu: goto label_3c704c;
        case 0x3c708cu: goto label_3c708c;
        case 0x3c70c8u: goto label_3c70c8;
        case 0x3c70f8u: goto label_3c70f8;
        case 0x3c7140u: goto label_3c7140;
        default: break;
    }

    ctx->pc = 0x3c6f60u;

    // 0x3c6f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c6f64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c6f68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c6f6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c6f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c6f70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c6f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c6f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c6f78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c6f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6f7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c6f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6f80: 0x1e00000d  bgtz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C6F80u;
    {
        const bool branch_taken_0x3c6f80 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x3C6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F80u;
        // 0x3c6f84: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f80) {
            ctx->pc = 0x3C6FB8u;
            goto label_3c6fb8;
        }
    }
    ctx->pc = 0x3C6F88u;
    // 0x3c6f88: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6f90: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c6f94: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3c6f98: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x3c6f98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c6f9c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6fa0: 0x7e460000  sq          $a2, 0x0($s2)
    ctx->pc = 0x3c6fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 6));
    // 0x3c6fa4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3c6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c6fa8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3c6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c6fac: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3c6facu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c6fb0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3C6FB0u;
    {
        const bool branch_taken_0x3c6fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6FB0u;
        // 0x3c6fb4: 0x7c850000  sq          $a1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6fb0) {
            ctx->pc = 0x3C7140u;
            goto label_3c7140;
        }
    }
    ctx->pc = 0x3C6FB8u;
label_3c6fb8:
    // 0x3c6fb8: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x3c6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6fbc: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x3c6fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3c6fc0: 0x2605fffe  addiu       $a1, $s0, -0x2
    ctx->pc = 0x3c6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x3c6fc4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x3c6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c6fc8: 0xc4c0ffcc  lwc1        $f0, -0x34($a2)
    ctx->pc = 0x3c6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6fcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c6fccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c6fd0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3c6fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3c6fd4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x3c6fd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c6fd8: 0x0  nop
    ctx->pc = 0x3c6fd8u;
    // NOP
    // 0x3c6fdc: 0x0  nop
    ctx->pc = 0x3c6fdcu;
    // NOP
    // 0x3c6fe0: 0x4a1001d  bgez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3C6FE0u;
    {
        const bool branch_taken_0x3c6fe0 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3c6fe0) {
            ctx->pc = 0x3C7058u;
            goto label_3c7058;
        }
    }
    ctx->pc = 0x3C6FE8u;
    // 0x3c6fe8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3c6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c6fec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c6fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6ff0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3c6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c6ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6ff8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3c6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c6ffc: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x3c6ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c7000: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7004: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x3c7004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c7008: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C7008u;
    SET_GPR_U32(ctx, 31, 0x3C7010u);
    ctx->pc = 0x3C700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7008u;
    // 0x3c700c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C7008u, 0x3C7010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7010u;
label_3c7010:
    // 0x3c7010: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3c7010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c7014: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x3c7014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c7018: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x3c7018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c701c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3c7020: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3c7020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c7024: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3c7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3c7028: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3c7028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c702c: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x3c702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3c7030: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7034: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x3c7034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c7038: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c7038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c703c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c703cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7040: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c7040u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c7044: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C7044u;
    SET_GPR_U32(ctx, 31, 0x3C704Cu);
    ctx->pc = 0x3C7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7044u;
    // 0x3c7048: 0x24480010  addiu       $t0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C7044u, 0x3C704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C704Cu;
label_3c704c:
    // 0x3c704c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3C704Cu;
    {
        const bool branch_taken_0x3c704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c704c) {
            ctx->pc = 0x3C7140u;
            goto label_3c7140;
        }
    }
    ctx->pc = 0x3C7054u;
    // 0x3c7054: 0x0  nop
    ctx->pc = 0x3c7054u;
    // NOP
label_3c7058:
    // 0x3c7058: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3c7058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c705c: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x3c705cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c7060: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C7060u;
    {
        const bool branch_taken_0x3c7060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7060) {
            ctx->pc = 0x3C70D0u;
            goto label_3c70d0;
        }
    }
    ctx->pc = 0x3C7068u;
    // 0x3c7068: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3c7068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3c706c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c706cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7070: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3c7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c7074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c7074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7078: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3c7078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c707c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7080: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x3c7080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c7084: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C7084u;
    SET_GPR_U32(ctx, 31, 0x3C708Cu);
    ctx->pc = 0x3C7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7084u;
    // 0x3c7088: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C7084u, 0x3C708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C708Cu;
label_3c708c:
    // 0x3c708c: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x3c708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x3c7090: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3c7090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c7094: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c7094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c7098: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c709c: 0x2232821  addu        $a1, $s1, $v1
    ctx->pc = 0x3c709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c70a0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3c70a4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3c70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c70a8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3c70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3c70ac: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x3c70acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c70b0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x3c70b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c70b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c70b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c70b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c70bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c70c0: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C70C0u;
    SET_GPR_U32(ctx, 31, 0x3C70C8u);
    ctx->pc = 0x3C70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C70C0u;
    // 0x3c70c4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C70C0u, 0x3C70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C70C8u;
label_3c70c8:
    // 0x3c70c8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3C70C8u;
    {
        const bool branch_taken_0x3c70c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c70c8) {
            ctx->pc = 0x3C7140u;
            goto label_3c7140;
        }
    }
    ctx->pc = 0x3C70D0u;
label_3c70d0:
    // 0x3c70d0: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3c70d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3c70d4: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3c70d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c70d8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3c70d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70dc: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x3c70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c70e0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3c70e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c70e4: 0x2224021  addu        $t0, $s1, $v0
    ctx->pc = 0x3c70e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c70e8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c70ec: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x3c70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c70f0: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C70F0u;
    SET_GPR_U32(ctx, 31, 0x3C70F8u);
    ctx->pc = 0x3C70F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C70F0u;
    // 0x3c70f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C70F0u, 0x3C70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C70F8u;
label_3c70f8:
    // 0x3c70f8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3c70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c70fc: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x3c70fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x3c7100: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7104: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c7104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c7108: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c710c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3c710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c7110: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x3c7110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7114: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3c7114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c7118: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3c7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c711c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c711cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c7120: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7124: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3c7124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c7128: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c712c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3c712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3c7130: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c7130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c7134: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x3c7134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3c7138: 0xc0dece8  jal         func_37B3A0
    ctx->pc = 0x3C7138u;
    SET_GPR_U32(ctx, 31, 0x3C7140u);
    ctx->pc = 0x3C713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7138u;
    // 0x3c713c: 0x24480010  addiu       $t0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B3A0u, 0x3C7138u, 0x3C7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7140u;
label_3c7140:
    // 0x3c7140: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c7140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7144: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c7144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7148: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c714c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c714cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7150: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c7150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7154: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7154u;
        // 0x3c7158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C715Cu;
}
