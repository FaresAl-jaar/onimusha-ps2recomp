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

// Function: sub_003ECFD0
// Address: 0x3ecfd0 - 0x3ed0e8
void sub_003ECFD0_0x3ecfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECFD0_0x3ecfd0");
#endif

    switch (ctx->pc) {
        case 0x3ed03cu: goto label_3ed03c;
        case 0x3ed0c4u: goto label_3ed0c4;
        default: break;
    }

    ctx->pc = 0x3ecfd0u;

    // 0x3ecfd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ecfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ecfd4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ecfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x3ecfd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ecfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ecfdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3ecfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3ecfe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ecfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ecfe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ecfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ecfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ecfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ecfec: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3ecfecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ecff0: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x3ecff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x3ecff4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3ecff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x3ecff8: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3ecff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ecffc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3ecffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x3ed000: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x3ed000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x3ed004: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x3ed004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3ed008: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3ed008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3ed00c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x3ed00cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x3ed010: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x3ed010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3ed014: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3ed014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3ed018: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x3ed018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3ed01c: 0xac8028f4  sw          $zero, 0x28F4($a0)
    ctx->pc = 0x3ed01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10484), GPR_U32(ctx, 0));
    // 0x3ed020: 0x90902b3e  lbu         $s0, 0x2B3E($a0)
    ctx->pc = 0x3ed020u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11070)));
    // 0x3ed024: 0x2e010005  sltiu       $at, $s0, 0x5
    ctx->pc = 0x3ed024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ed028: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x3ED028u;
    {
        const bool branch_taken_0x3ed028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED028u;
        // 0x3ed02c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed028) {
            ctx->pc = 0x3ED0D0u;
            goto label_3ed0d0;
        }
    }
    ctx->pc = 0x3ED030u;
    // 0x3ed030: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x3ed030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x3ed034: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3ED034u;
    SET_GPR_U32(ctx, 31, 0x3ED03Cu);
    ctx->pc = 0x3ED038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED034u;
    // 0x3ed038: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3ED034u, 0x3ED03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED03Cu;
label_3ed03c:
    // 0x3ed03c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED03Cu;
    {
        const bool branch_taken_0x3ed03c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3ED040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED03Cu;
        // 0x3ed040: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed03c) {
            ctx->pc = 0x3ED050u;
            goto label_3ed050;
        }
    }
    ctx->pc = 0x3ED044u;
    // 0x3ed044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ed044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED048u;
    {
        const bool branch_taken_0x3ed048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED048u;
        // 0x3ed04c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed048) {
            ctx->pc = 0x3ED068u;
            goto label_3ed068;
        }
    }
    ctx->pc = 0x3ED050u;
label_3ed050:
    // 0x3ed050: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3ed050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3ed054: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ed054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ed058: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ed058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed05c: 0x0  nop
    ctx->pc = 0x3ed05cu;
    // NOP
    // 0x3ed060: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3ed060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ed064: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ed064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ed068:
    // 0x3ed068: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x3ed068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3ed06c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ed06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ed070: 0x24634a20  addiu       $v1, $v1, 0x4A20
    ctx->pc = 0x3ed070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18976));
    // 0x3ed074: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ed074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ed078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ed078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ed07c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ed07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed080: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED080u;
    {
        const bool branch_taken_0x3ed080 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x3ED084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED080u;
        // 0x3ed084: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed080) {
            ctx->pc = 0x3ED094u;
            goto label_3ed094;
        }
    }
    ctx->pc = 0x3ED088u;
    // 0x3ed088: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x3ed088u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed08c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED08Cu;
    {
        const bool branch_taken_0x3ed08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED08Cu;
        // 0x3ed090: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed08c) {
            ctx->pc = 0x3ED0B0u;
            goto label_3ed0b0;
        }
    }
    ctx->pc = 0x3ED094u;
label_3ed094:
    // 0x3ed094: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x3ed094u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x3ed098: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x3ed098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3ed09c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ed09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3ed0a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ed0a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed0a4: 0x0  nop
    ctx->pc = 0x3ed0a4u;
    // NOP
    // 0x3ed0a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ed0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3ed0ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ed0acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ed0b0:
    // 0x3ed0b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ed0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed0b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED0B4u;
    {
        const bool branch_taken_0x3ed0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0B4u;
        // 0x3ed0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed0b4) {
            ctx->pc = 0x3ED0D0u;
            goto label_3ed0d0;
        }
    }
    ctx->pc = 0x3ED0BCu;
    // 0x3ed0bc: 0xc0fa2dc  jal         func_3E8B70
    ctx->pc = 0x3ED0BCu;
    SET_GPR_U32(ctx, 31, 0x3ED0C4u);
    ctx->pc = 0x3E8B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8B70u, 0x3ED0BCu, 0x3ED0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED0C4u;
label_3ed0c4:
    // 0x3ed0c4: 0x92432b3e  lbu         $v1, 0x2B3E($s2)
    ctx->pc = 0x3ed0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11070)));
    // 0x3ed0c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ed0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ed0cc: 0xa2432b3e  sb          $v1, 0x2B3E($s2)
    ctx->pc = 0x3ed0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11070), (uint8_t)GPR_U32(ctx, 3));
label_3ed0d0:
    // 0x3ed0d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ed0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ed0d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ed0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ed0d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED0E0u;
        // 0x3ed0e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED0E8u;
}
