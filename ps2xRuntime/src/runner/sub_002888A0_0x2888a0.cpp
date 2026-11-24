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

// Function: sub_002888A0
// Address: 0x2888a0 - 0x288960
void sub_002888A0_0x2888a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002888A0_0x2888a0");
#endif

    switch (ctx->pc) {
        case 0x288924u: goto label_288924;
        case 0x288938u: goto label_288938;
        case 0x288948u: goto label_288948;
        default: break;
    }

    ctx->pc = 0x2888a0u;

    // 0x2888a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2888a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2888a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2888a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2888a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2888a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2888ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2888acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2888b0: 0x8ca7004c  lw          $a3, 0x4C($a1)
    ctx->pc = 0x2888b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2888b4: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x2888b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888b8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2888b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2888bc: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2888bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888c0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2888c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2888c4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x2888c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2888c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2888c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2888cc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2888ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2888d0: 0x90c30011  lbu         $v1, 0x11($a2)
    ctx->pc = 0x2888d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17)));
    // 0x2888d4: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2888d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2888d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2888D8u;
    {
        const bool branch_taken_0x2888d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888D8u;
        // 0x2888dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888d8) {
            ctx->pc = 0x288900u;
            goto label_288900;
        }
    }
    ctx->pc = 0x2888E0u;
    // 0x2888e0: 0x90c40010  lbu         $a0, 0x10($a2)
    ctx->pc = 0x2888e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2888e4: 0x8ce30094  lw          $v1, 0x94($a3)
    ctx->pc = 0x2888e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x2888e8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2888e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2888ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2888ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2888f0: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2888f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2888f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2888F4u;
    {
        const bool branch_taken_0x2888f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2888F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2888F4u;
        // 0x2888f8: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2888f4) {
            ctx->pc = 0x288948u;
            goto label_288948;
        }
    }
    ctx->pc = 0x2888FCu;
    // 0x2888fc: 0x0  nop
    ctx->pc = 0x2888fcu;
    // NOP
label_288900:
    // 0x288900: 0x94e2006a  lhu         $v0, 0x6A($a3)
    ctx->pc = 0x288900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 106)));
    // 0x288904: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x288904u;
    {
        const bool branch_taken_0x288904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288904) {
            ctx->pc = 0x288930u;
            goto label_288930;
        }
    }
    ctx->pc = 0x28890Cu;
    // 0x28890c: 0x90c30010  lbu         $v1, 0x10($a2)
    ctx->pc = 0x28890cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x288910: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x288910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x288914: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x288914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x288918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28891c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x28891Cu;
    SET_GPR_U32(ctx, 31, 0x288924u);
    ctx->pc = 0x288920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28891Cu;
    // 0x288920: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x28891Cu, 0x288924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288924u;
label_288924:
    // 0x288924: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x288924u;
    {
        const bool branch_taken_0x288924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x288924) {
            ctx->pc = 0x288948u;
            goto label_288948;
        }
    }
    ctx->pc = 0x28892Cu;
    // 0x28892c: 0x0  nop
    ctx->pc = 0x28892cu;
    // NOP
label_288930:
    // 0x288930: 0xc096d04  jal         func_25B410
    ctx->pc = 0x288930u;
    SET_GPR_U32(ctx, 31, 0x288938u);
    ctx->pc = 0x288934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288930u;
    // 0x288934: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x288930u, 0x288938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288938u;
label_288938:
    // 0x288938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28893c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x28893cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288940: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x288940u;
    SET_GPR_U32(ctx, 31, 0x288948u);
    ctx->pc = 0x288944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288940u;
    // 0x288944: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x288940u, 0x288948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288948u;
label_288948:
    // 0x288948: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x288948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28894c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x28894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x288950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x288950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288958: 0x3e00008  jr          $ra
    ctx->pc = 0x288958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288958u;
        // 0x28895c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288960u;
}
