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

// Function: sub_00326E70
// Address: 0x326e70 - 0x327020
void sub_00326E70_0x326e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326E70_0x326e70");
#endif

    switch (ctx->pc) {
        case 0x326eb0u: goto label_326eb0;
        case 0x326eb8u: goto label_326eb8;
        case 0x326ee8u: goto label_326ee8;
        case 0x326f0cu: goto label_326f0c;
        case 0x326f3cu: goto label_326f3c;
        case 0x326f64u: goto label_326f64;
        case 0x326f80u: goto label_326f80;
        case 0x32700cu: goto label_32700c;
        default: break;
    }

    ctx->pc = 0x326e70u;

    // 0x326e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326e74: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x326e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x326e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326e7c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x326e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x326e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326e84: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x326e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x326e88: 0x78870020  lq          $a3, 0x20($a0)
    ctx->pc = 0x326e88u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x326e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326e90: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x326e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x326e94: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x326e98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x326e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x326e9c: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x326e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x326ea0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x326ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x326ea4: 0x7c870080  sq          $a3, 0x80($a0)
    ctx->pc = 0x326ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 7));
    // 0x326ea8: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x326EA8u;
    SET_GPR_U32(ctx, 31, 0x326EB0u);
    ctx->pc = 0x326EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EA8u;
    // 0x326eac: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x326EA8u, 0x326EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EB0u;
label_326eb0:
    // 0x326eb0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x326EB0u;
    SET_GPR_U32(ctx, 31, 0x326EB8u);
    ctx->pc = 0x326EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EB0u;
    // 0x326eb4: 0x8e0404e4  lw          $a0, 0x4E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x326EB0u, 0x326EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EB8u;
label_326eb8:
    // 0x326eb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326EB8u;
    {
        const bool branch_taken_0x326eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326eb8) {
            ctx->pc = 0x326EC8u;
            goto label_326ec8;
        }
    }
    ctx->pc = 0x326EC0u;
    // 0x326ec0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x326ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x326ec4: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x326ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_326ec8:
    // 0x326ec8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x326ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x326ecc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x326eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x326ed0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x326ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x326ed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326edc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x326edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326ee0: 0xc0c9c18  jal         func_327060
    ctx->pc = 0x326EE0u;
    SET_GPR_U32(ctx, 31, 0x326EE8u);
    ctx->pc = 0x326EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EE0u;
    // 0x326ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327060u, 0x326EE0u, 0x326EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EE8u;
label_326ee8:
    // 0x326ee8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x326EE8u;
    {
        const bool branch_taken_0x326ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE8u;
        // 0x326eec: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ee8) {
            ctx->pc = 0x326F18u;
            goto label_326f18;
        }
    }
    ctx->pc = 0x326EF0u;
    // 0x326ef0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x326ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x326ef4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x326ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x326ef8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326f00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x326f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326f04: 0xc0c9c2c  jal         func_3270B0
    ctx->pc = 0x326F04u;
    SET_GPR_U32(ctx, 31, 0x326F0Cu);
    ctx->pc = 0x326F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F04u;
    // 0x326f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270B0u, 0x326F04u, 0x326F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F0Cu;
label_326f0c:
    // 0x326f0c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x326F0Cu;
    {
        const bool branch_taken_0x326f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f0c) {
            ctx->pc = 0x327010u;
            goto label_327010;
        }
    }
    ctx->pc = 0x326F14u;
    // 0x326f14: 0x0  nop
    ctx->pc = 0x326f14u;
    // NOP
label_326f18:
    // 0x326f18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x326f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x326f1c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x326f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x326f20: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x326f24: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x326f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x326f28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326f30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x326f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326f34: 0xc0c9c18  jal         func_327060
    ctx->pc = 0x326F34u;
    SET_GPR_U32(ctx, 31, 0x326F3Cu);
    ctx->pc = 0x326F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F34u;
    // 0x326f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327060u, 0x326F34u, 0x326F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F3Cu;
label_326f3c:
    // 0x326f3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x326F3Cu;
    {
        const bool branch_taken_0x326f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F3Cu;
        // 0x326f40: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f3c) {
            ctx->pc = 0x326F70u;
            goto label_326f70;
        }
    }
    ctx->pc = 0x326F44u;
    // 0x326f44: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x326f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x326f48: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x326f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x326f4c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x326f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x326f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326f58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326f5c: 0xc0c9c2c  jal         func_3270B0
    ctx->pc = 0x326F5Cu;
    SET_GPR_U32(ctx, 31, 0x326F64u);
    ctx->pc = 0x326F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F5Cu;
    // 0x326f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270B0u, 0x326F5Cu, 0x326F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F64u;
label_326f64:
    // 0x326f64: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x326F64u;
    {
        const bool branch_taken_0x326f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f64) {
            ctx->pc = 0x327010u;
            goto label_327010;
        }
    }
    ctx->pc = 0x326F6Cu;
    // 0x326f6c: 0x0  nop
    ctx->pc = 0x326f6cu;
    // NOP
label_326f70:
    // 0x326f70: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x326f74: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x326f78: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x326F78u;
    SET_GPR_U32(ctx, 31, 0x326F80u);
    ctx->pc = 0x326F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F78u;
    // 0x326f7c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x326F78u, 0x326F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F80u;
label_326f80:
    // 0x326f80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x326F80u;
    {
        const bool branch_taken_0x326f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f80) {
            ctx->pc = 0x326FE8u;
            goto label_326fe8;
        }
    }
    ctx->pc = 0x326F88u;
    // 0x326f88: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x326f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326f8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x326f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x326f90: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x326f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x326f94: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x326f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x326f98: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x326f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x326f9c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x326f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326fa0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x326fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x326fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x326fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x326fa8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x326FA8u;
    {
        const bool branch_taken_0x326fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x326fa8) {
            ctx->pc = 0x326FE8u;
            goto label_326fe8;
        }
    }
    ctx->pc = 0x326FB0u;
    // 0x326fb0: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x326fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x326fb4: 0x920304ec  lbu         $v1, 0x4EC($s0)
    ctx->pc = 0x326fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x326fb8: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x326FB8u;
    {
        const bool branch_taken_0x326fb8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x326fb8) {
            ctx->pc = 0x326FE8u;
            goto label_326fe8;
        }
    }
    ctx->pc = 0x326FC0u;
    // 0x326fc0: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x326fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326fc4: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x326fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x326fc8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x326fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x326fcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x326fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326fd0: 0x0  nop
    ctx->pc = 0x326fd0u;
    // NOP
    // 0x326fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x326fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x326fd8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x326fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x326fdc: 0x920304ec  lbu         $v1, 0x4EC($s0)
    ctx->pc = 0x326fdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1260)));
    // 0x326fe0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326fe4: 0xa20304ec  sb          $v1, 0x4EC($s0)
    ctx->pc = 0x326fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1260), (uint8_t)GPR_U32(ctx, 3));
label_326fe8:
    // 0x326fe8: 0x860304ea  lh          $v1, 0x4EA($s0)
    ctx->pc = 0x326fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1258)));
    // 0x326fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326ff0: 0xa60304ea  sh          $v1, 0x4EA($s0)
    ctx->pc = 0x326ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1258), (uint16_t)GPR_U32(ctx, 3));
    // 0x326ff4: 0x860304ea  lh          $v1, 0x4EA($s0)
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1258)));
    // 0x326ff8: 0x28630960  slti        $v1, $v1, 0x960
    ctx->pc = 0x326ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2400) ? 1 : 0);
    // 0x326ffc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x326FFCu;
    {
        const bool branch_taken_0x326ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FFCu;
        // 0x327000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ffc) {
            ctx->pc = 0x327010u;
            goto label_327010;
        }
    }
    ctx->pc = 0x327004u;
    // 0x327004: 0xc0c9c08  jal         func_327020
    ctx->pc = 0x327004u;
    SET_GPR_U32(ctx, 31, 0x32700Cu);
    ctx->pc = 0x327020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327020u, 0x327004u, 0x32700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32700Cu;
label_32700c:
    // 0x32700c: 0x0  nop
    ctx->pc = 0x32700cu;
    // NOP
label_327010:
    // 0x327010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327018: 0x3e00008  jr          $ra
    ctx->pc = 0x327018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327018u;
        // 0x32701c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327020u;
}
