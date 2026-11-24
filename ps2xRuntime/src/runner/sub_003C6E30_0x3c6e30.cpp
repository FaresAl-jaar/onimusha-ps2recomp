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

// Function: sub_003C6E30
// Address: 0x3c6e30 - 0x3c6f58
void sub_003C6E30_0x3c6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6E30_0x3c6e30");
#endif

    switch (ctx->pc) {
        case 0x3c6e54u: goto label_3c6e54;
        case 0x3c6e68u: goto label_3c6e68;
        case 0x3c6ec0u: goto label_3c6ec0;
        case 0x3c6f00u: goto label_3c6f00;
        default: break;
    }

    ctx->pc = 0x3c6e30u;

    // 0x3c6e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c6e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c6e34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c6e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c6e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c6e3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c6e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c6e40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c6e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c6e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c6e48: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c6e48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c6e4c: 0xc0f1a8c  jal         func_3C6A30
    ctx->pc = 0x3C6E4Cu;
    SET_GPR_U32(ctx, 31, 0x3C6E54u);
    ctx->pc = 0x3C6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6E4Cu;
    // 0x3c6e50: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A30u, 0x3C6E4Cu, 0x3C6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6E54u;
label_3c6e54:
    // 0x3c6e54: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3c6e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3c6e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c6e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6e5c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3C6E5Cu;
    {
        const bool branch_taken_0x3c6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6E5Cu;
        // 0x3c6e60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6e5c) {
            ctx->pc = 0x3C6F20u;
            goto label_3c6f20;
        }
    }
    ctx->pc = 0x3C6E64u;
    // 0x3c6e64: 0x0  nop
    ctx->pc = 0x3c6e64u;
    // NOP
label_3c6e68:
    // 0x3c6e68: 0x8e430574  lw          $v1, 0x574($s2)
    ctx->pc = 0x3c6e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6e6c: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x3c6e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6e70: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3c6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3c6e74: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x3c6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x3c6e78: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3c6e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c6e7c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x3c6e7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x3c6e80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c6e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6e84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c6e88: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x3c6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6e8c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3c6e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3c6e90: 0x8e430574  lw          $v1, 0x574($s2)
    ctx->pc = 0x3c6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6e94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c6e94u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E370u));
    // 0x3c6e98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c6e9c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3c6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6ea0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x3c6ea0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3c6ea4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3c6ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3c6ea8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3c6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c6eac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3c6eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3c6eb0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3c6eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3c6eb4: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c6eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6eb8: 0xc041442  jal         func_105108
    ctx->pc = 0x3C6EB8u;
    SET_GPR_U32(ctx, 31, 0x3C6EC0u);
    ctx->pc = 0x3C6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6EB8u;
    // 0x3c6ebc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C6EB8u, 0x3C6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6EC0u;
label_3c6ec0:
    // 0x3c6ec0: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6ec4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6ec8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3c6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c6ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c6ed0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x3c6ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c6ed4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3c6ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c6ed8: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x3c6ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6edc: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6ee0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3c6ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3c6ee4: 0x8e440574  lw          $a0, 0x574($s2)
    ctx->pc = 0x3c6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6ee8: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6eec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c6ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c6ef4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3c6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3c6ef8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C6EF8u;
    SET_GPR_U32(ctx, 31, 0x3C6F00u);
    ctx->pc = 0x3C6EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6EF8u;
    // 0x3c6efc: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C6EF8u, 0x3C6F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F00u;
label_3c6f00:
    // 0x3c6f00: 0x8e430574  lw          $v1, 0x574($s2)
    ctx->pc = 0x3c6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6f04: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x3c6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c6f08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c6f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c6f0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c6f10: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3c6f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3c6f14: 0x8e430574  lw          $v1, 0x574($s2)
    ctx->pc = 0x3c6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c6f18: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c6f1c: 0xe474001c  swc1        $f20, 0x1C($v1)
    ctx->pc = 0x3c6f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_3c6f20:
    // 0x3c6f20: 0x8e430568  lw          $v1, 0x568($s2)
    ctx->pc = 0x3c6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c6f24: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3c6f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c6f28: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3C6F28u;
    {
        const bool branch_taken_0x3c6f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6f28) {
            ctx->pc = 0x3C6E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6e68;
        }
    }
    ctx->pc = 0x3C6F30u;
    // 0x3c6f30: 0xe655056c  swc1        $f21, 0x56C($s2)
    ctx->pc = 0x3c6f30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1388), bits); }
    // 0x3c6f34: 0xe6550570  swc1        $f21, 0x570($s2)
    ctx->pc = 0x3c6f34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1392), bits); }
    // 0x3c6f38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c6f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c6f3c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c6f40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c6f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6f44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c6f48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c6f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c6f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6f50: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F50u;
        // 0x3c6f54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6F58u;
}
