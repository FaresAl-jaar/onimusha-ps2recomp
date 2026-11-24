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

// Function: sub_0031A620
// Address: 0x31a620 - 0x31a848
void sub_0031A620_0x31a620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A620_0x31a620");
#endif

    switch (ctx->pc) {
        case 0x31a690u: goto label_31a690;
        case 0x31a72cu: goto label_31a72c;
        case 0x31a754u: goto label_31a754;
        case 0x31a78cu: goto label_31a78c;
        case 0x31a7b8u: goto label_31a7b8;
        case 0x31a7ecu: goto label_31a7ec;
        case 0x31a830u: goto label_31a830;
        default: break;
    }

    ctx->pc = 0x31a620u;

    // 0x31a620: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31a624: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31a628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31a62c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a634: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x31a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a638: 0x8c910144  lw          $s1, 0x144($a0)
    ctx->pc = 0x31a638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x31a63c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x31a63cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A640u;
    {
        const bool branch_taken_0x31a640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A640u;
        // 0x31a644: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a640) {
            ctx->pc = 0x31A650u;
            goto label_31a650;
        }
    }
    ctx->pc = 0x31A648u;
    // 0x31a648: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31a64c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x31a64cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_31a650:
    // 0x31a650: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x31a650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31a654: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x31a654u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x31a658: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x31A658u;
    {
        const bool branch_taken_0x31a658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A658u;
        // 0x31a65c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a658) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A660u;
    // 0x31a660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31a664: 0x2463c970  addiu       $v1, $v1, -0x3690
    ctx->pc = 0x31a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x31a668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31a66c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a670: 0x400008  jr          $v0
    ctx->pc = 0x31A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31A678u: goto label_31a678;
            case 0x31A680u: goto label_31a680;
            case 0x31A740u: goto label_31a740;
            case 0x31A778u: goto label_31a778;
            case 0x31A7C0u: goto label_31a7c0;
            case 0x31A810u: goto label_31a810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A670u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A678u;
label_31a678:
    // 0x31a678: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a67c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x31a67cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_31a680:
    // 0x31a680: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x31a680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x31a684: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x31a684u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a688: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x31A688u;
    SET_GPR_U32(ctx, 31, 0x31A690u);
    ctx->pc = 0x31A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A688u;
    // 0x31a68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x31A688u, 0x31A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A690u;
label_31a690:
    // 0x31a690: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A690u;
    {
        const bool branch_taken_0x31a690 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A690u;
        // 0x31a694: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a690) {
            ctx->pc = 0x31A6A4u;
            goto label_31a6a4;
        }
    }
    ctx->pc = 0x31A698u;
    // 0x31a698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a69c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A69Cu;
    {
        const bool branch_taken_0x31a69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A69Cu;
        // 0x31a6a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a69c) {
            ctx->pc = 0x31A6BCu;
            goto label_31a6bc;
        }
    }
    ctx->pc = 0x31A6A4u;
label_31a6a4:
    // 0x31a6a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31a6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31a6a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31a6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31a6ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a6acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6b0: 0x0  nop
    ctx->pc = 0x31a6b0u;
    // NOP
    // 0x31a6b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31a6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31a6b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31a6b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31a6bc:
    // 0x31a6bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31a6c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x31a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x31a6c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31a6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31a6c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a6c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6cc: 0x0  nop
    ctx->pc = 0x31a6ccu;
    // NOP
    // 0x31a6d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31a6d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31a6d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x31a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x31a6d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x31a6d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31a6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a6e0: 0x0  nop
    ctx->pc = 0x31a6e0u;
    // NOP
    // 0x31a6e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31a6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a6e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31A6E8u;
    {
        const bool branch_taken_0x31a6e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a6e8) {
            ctx->pc = 0x31A700u;
            goto label_31a700;
        }
    }
    ctx->pc = 0x31A6F0u;
    // 0x31a6f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a6f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31a6f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31a6f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A6F8u;
    {
        const bool branch_taken_0x31a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6F8u;
        // 0x31a6fc: 0x70082b  sltu        $at, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a6f8) {
            ctx->pc = 0x31A71Cu;
            goto label_31a71c;
        }
    }
    ctx->pc = 0x31A700u;
label_31a700:
    // 0x31a700: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31a704: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x31a708: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31a70c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31a70cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31a710: 0x0  nop
    ctx->pc = 0x31a710u;
    // NOP
    // 0x31a714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31a714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31a718: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31a718u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_31a71c:
    // 0x31a71c: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x31A71Cu;
    {
        const bool branch_taken_0x31a71c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A71Cu;
        // 0x31a720: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a71c) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A724u;
    // 0x31a724: 0xc0b8838  jal         func_2E20E0
    ctx->pc = 0x31A724u;
    SET_GPR_U32(ctx, 31, 0x31A72Cu);
    ctx->pc = 0x31A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A724u;
    // 0x31a728: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E20E0u, 0x31A724u, 0x31A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A72Cu;
label_31a72c:
    // 0x31a72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a734: 0xa24329d1  sb          $v1, 0x29D1($s2)
    ctx->pc = 0x31a734u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10705), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a738: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x31a738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a73c: 0x0  nop
    ctx->pc = 0x31a73cu;
    // NOP
label_31a740:
    // 0x31a740: 0x9642078c  lhu         $v0, 0x78C($s2)
    ctx->pc = 0x31a740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1932)));
    // 0x31a744: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31a744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31a748: 0xa642078c  sh          $v0, 0x78C($s2)
    ctx->pc = 0x31a748u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a74c: 0xc06039c  jal         func_180E70
    ctx->pc = 0x31A74Cu;
    SET_GPR_U32(ctx, 31, 0x31A754u);
    ctx->pc = 0x31A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A74Cu;
    // 0x31a750: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x31A74Cu, 0x31A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A754u;
label_31a754:
    // 0x31a754: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31a754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31a758: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x31a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x31a75c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x31A75Cu;
    {
        const bool branch_taken_0x31a75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A75Cu;
        // 0x31a760: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a75c) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A764u;
    // 0x31a764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a768: 0xa24329d1  sb          $v1, 0x29D1($s2)
    ctx->pc = 0x31a768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10705), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a76c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x31A76Cu;
    {
        const bool branch_taken_0x31a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A76Cu;
        // 0x31a770: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a76c) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A774u;
    // 0x31a774: 0x0  nop
    ctx->pc = 0x31a774u;
    // NOP
label_31a778:
    // 0x31a778: 0x9642078c  lhu         $v0, 0x78C($s2)
    ctx->pc = 0x31a778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1932)));
    // 0x31a77c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31a780: 0xa642078c  sh          $v0, 0x78C($s2)
    ctx->pc = 0x31a780u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1932), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a784: 0xc06039c  jal         func_180E70
    ctx->pc = 0x31A784u;
    SET_GPR_U32(ctx, 31, 0x31A78Cu);
    ctx->pc = 0x31A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A784u;
    // 0x31a788: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x31A784u, 0x31A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A78Cu;
label_31a78c:
    // 0x31a78c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31a78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31a790: 0x240200a2  addiu       $v0, $zero, 0xA2
    ctx->pc = 0x31a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x31a794: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x31A794u;
    {
        const bool branch_taken_0x31a794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A794u;
        // 0x31a798: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a794) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A79Cu;
    // 0x31a79c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x31a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x31a7a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x31a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a7a4: 0xa24329d1  sb          $v1, 0x29D1($s2)
    ctx->pc = 0x31a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10705), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a7a8: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x31a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x31a7ac: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x31a7acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a7b0: 0xc056e04  jal         func_15B810
    ctx->pc = 0x31A7B0u;
    SET_GPR_U32(ctx, 31, 0x31A7B8u);
    ctx->pc = 0x31A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7B0u;
    // 0x31a7b4: 0x24053506  addiu       $a1, $zero, 0x3506 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13574));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x31A7B0u, 0x31A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7B8u;
label_31a7b8:
    // 0x31a7b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31A7B8u;
    {
        const bool branch_taken_0x31a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a7b8) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A7C0u;
label_31a7c0:
    // 0x31a7c0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31a7c4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x31a7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x31a7c8: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x31a7cc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A7CCu;
    {
        const bool branch_taken_0x31a7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31a7cc) {
            ctx->pc = 0x31A7F0u;
            goto label_31a7f0;
        }
    }
    ctx->pc = 0x31A7D4u;
    // 0x31a7d4: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x31a7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x31a7d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a7dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A7DCu;
    {
        const bool branch_taken_0x31a7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7DCu;
        // 0x31a7e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7dc) {
            ctx->pc = 0x31A7F0u;
            goto label_31a7f0;
        }
    }
    ctx->pc = 0x31A7E4u;
    // 0x31a7e4: 0xc06407c  jal         func_1901F0
    ctx->pc = 0x31A7E4u;
    SET_GPR_U32(ctx, 31, 0x31A7ECu);
    ctx->pc = 0x1901F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1901F0u, 0x31A7E4u, 0x31A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7ECu;
label_31a7ec:
    // 0x31a7ec: 0x0  nop
    ctx->pc = 0x31a7ecu;
    // NOP
label_31a7f0:
    // 0x31a7f0: 0x9644078c  lhu         $a0, 0x78C($s2)
    ctx->pc = 0x31a7f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1932)));
    // 0x31a7f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a7f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31a7fc: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x31a7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x31a800: 0xa644078c  sh          $a0, 0x78C($s2)
    ctx->pc = 0x31a800u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1932), (uint16_t)GPR_U32(ctx, 4));
    // 0x31a804: 0xa24329d1  sb          $v1, 0x29D1($s2)
    ctx->pc = 0x31a804u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10705), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a808: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31A808u;
    {
        const bool branch_taken_0x31a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A808u;
        // 0x31a80c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a808) {
            ctx->pc = 0x31A828u;
            goto label_31a828;
        }
    }
    ctx->pc = 0x31A810u;
label_31a810:
    // 0x31a810: 0x9643078c  lhu         $v1, 0x78C($s2)
    ctx->pc = 0x31a810u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1932)));
    // 0x31a814: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a818: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x31a818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x31a81c: 0xa643078c  sh          $v1, 0x78C($s2)
    ctx->pc = 0x31a81cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a820: 0xa24229d1  sb          $v0, 0x29D1($s2)
    ctx->pc = 0x31a820u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10705), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a824: 0x0  nop
    ctx->pc = 0x31a824u;
    // NOP
label_31a828:
    // 0x31a828: 0xc0a6188  jal         func_298620
    ctx->pc = 0x31A828u;
    SET_GPR_U32(ctx, 31, 0x31A830u);
    ctx->pc = 0x31A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A828u;
    // 0x31a82c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x31A828u, 0x31A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A830u;
label_31a830:
    // 0x31a830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31a834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a840: 0x3e00008  jr          $ra
    ctx->pc = 0x31A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A840u;
        // 0x31a844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A848u;
}
