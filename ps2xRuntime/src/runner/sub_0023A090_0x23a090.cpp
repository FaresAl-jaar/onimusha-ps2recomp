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

// Function: sub_0023A090
// Address: 0x23a090 - 0x23a384
void sub_0023A090_0x23a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A090_0x23a090");
#endif

    switch (ctx->pc) {
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a170u: goto label_23a170;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a224u: goto label_23a224;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2d4u: goto label_23a2d4;
        default: break;
    }

    ctx->pc = 0x23a090u;

label_23a090:
    // 0x23a090: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a094: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23a098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a09c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23a0a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23a0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23a0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23a0a8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a0ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23a0b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23a0b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23a0b8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23a0bc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A0BCu;
    {
        const bool branch_taken_0x23a0bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0BCu;
        // 0x23a0c0: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0bc) {
            ctx->pc = 0x23A0D4u;
            goto label_23a0d4;
        }
    }
    ctx->pc = 0x23A0C4u;
    // 0x23a0c4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A0C4u;
    {
        const bool branch_taken_0x23a0c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c4) {
            ctx->pc = 0x23A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0C4u;
            // 0x23a0c8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A0D8u;
            goto label_23a0d8;
        }
    }
    ctx->pc = 0x23A0CCu;
    // 0x23a0cc: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A0CCu;
    {
        const bool branch_taken_0x23a0cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0CCu;
        // 0x23a0d0: 0x3c10004d  lui         $s0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0cc) {
            ctx->pc = 0x23A0E8u;
            goto label_23a0e8;
        }
    }
    ctx->pc = 0x23A0D4u;
label_23a0d4:
    // 0x23a0d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23a0d8:
    // 0x23a0d8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A0D8u;
    SET_GPR_U32(ctx, 31, 0x23A0E0u);
    ctx->pc = 0x23A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A0D8u;
    // 0x23a0dc: 0x2484b0d0  addiu       $a0, $a0, -0x4F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A0D8u, 0x23A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0E0u;
label_23a0e0:
    // 0x23a0e0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x23A0E0u;
    {
        const bool branch_taken_0x23a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E0u;
        // 0x23a0e4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0e0) {
            ctx->pc = 0x23A360u;
            goto label_23a360;
        }
    }
    ctx->pc = 0x23A0E8u;
label_23a0e8:
    // 0x23a0e8: 0x8e028f84  lw          $v0, -0x707C($s0)
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938500)));
    // 0x23a0ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A0ECu;
    {
        const bool branch_taken_0x23a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ECu;
        // 0x23a0f0: 0x3c11004d  lui         $s1, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ec) {
            ctx->pc = 0x23A108u;
            goto label_23a108;
        }
    }
    ctx->pc = 0x23A0F4u;
    // 0x23a0f4: 0xc08e7be  jal         func_239EF8
    ctx->pc = 0x23A0F4u;
    SET_GPR_U32(ctx, 31, 0x23A0FCu);
    ctx->pc = 0x239EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239EF8u, 0x23A0F4u, 0x23A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A0FCu;
label_23a0fc:
    // 0x23a0fc: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x23A0FCu;
    {
        const bool branch_taken_0x23a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0FCu;
        // 0x23a100: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0fc) {
            ctx->pc = 0x23A360u;
            goto label_23a360;
        }
    }
    ctx->pc = 0x23A104u;
    // 0x23a104: 0x0  nop
    ctx->pc = 0x23a104u;
    // NOP
label_23a108:
    // 0x23a108: 0xae208fd4  sw          $zero, -0x702C($s1)
    ctx->pc = 0x23a108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938580), GPR_U32(ctx, 0));
    // 0x23a10c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x23a10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x23a110: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x23a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x23a114: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a118: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A118u;
        // 0x23a11c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A2A0u;
            goto label_23a2a0;
        }
    }
    ctx->pc = 0x23A120u;
    // 0x23a120: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x23a120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x23a124: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23A124u;
    {
        const bool branch_taken_0x23a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a124) {
            ctx->pc = 0x23A128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A124u;
            // 0x23a128: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A158u;
            goto label_23a158;
        }
    }
    ctx->pc = 0x23A12Cu;
    // 0x23a12c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23a130: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x23a134: 0x8c43ef80  lw          $v1, -0x1080($v0)
    ctx->pc = 0x23a134u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x23a138: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x23a138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x23a13c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23a140: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23a140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23a144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23a144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a148: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23a148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23a14c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23a150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23a154: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x23a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23a158:
    // 0x23a158: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x23a158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x23a15c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a160: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23a164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a168: 0xc08e7be  jal         func_239EF8
    ctx->pc = 0x23A168u;
    SET_GPR_U32(ctx, 31, 0x23A170u);
    ctx->pc = 0x23A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A168u;
    // 0x23a16c: 0x3c16004d  lui         $s6, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)77 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239EF8u, 0x23A168u, 0x23A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A170u;
label_23a170:
    // 0x23a170: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x23a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a174: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23a174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23a178: 0x26d48fd0  addiu       $s4, $s6, -0x7030
    ctx->pc = 0x23a178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938576));
    // 0x23a17c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x23a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a180: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23a184: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x23a184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23a188: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23a188u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a190: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x23a190u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23a194: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x23a194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x23a198: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x23a198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x23a19c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x23a19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x23a1a0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x23a1a0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23a1a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23a1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23a1a8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x23a1ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23a1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x23a1b0: 0x0  nop
    ctx->pc = 0x23a1b0u;
    // NOP
    // 0x23a1b4: 0x0  nop
    ctx->pc = 0x23a1b4u;
    // NOP
    // 0x23a1b8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x23a1b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x23a1bc: 0x0  nop
    ctx->pc = 0x23a1bcu;
    // NOP
    // 0x23a1c0: 0x0  nop
    ctx->pc = 0x23a1c0u;
    // NOP
    // 0x23a1c4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x23a1c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x23a1c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23a1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23a1cc: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x23a1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x23a1d0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x23a1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a1d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23A1D4u;
    {
        const bool branch_taken_0x23a1d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1D4u;
        // 0x23a1d8: 0xe6218fd4  swc1        $f1, -0x702C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294938580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1d4) {
            ctx->pc = 0x23A1F0u;
            goto label_23a1f0;
        }
    }
    ctx->pc = 0x23A1DCu;
    // 0x23a1dc: 0x3c01c270  lui         $at, 0xC270
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49776 << 16));
    // 0x23a1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a1e8: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
    ctx->pc = 0x23A1E8u;
    {
        const bool branch_taken_0x23a1e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a1e8) {
            ctx->pc = 0x23A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A1E8u;
            // 0x23a1ec: 0x8e420088  lw          $v0, 0x88($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A348u;
            goto label_23a348;
        }
    }
    ctx->pc = 0x23A1F0u;
label_23a1f0:
    // 0x23a1f0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23a1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a1f8: 0x8c438fa8  lw          $v1, -0x7058($v0)
    ctx->pc = 0x23a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C8FA8u));
    // 0x23a1fc: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x26108f84  addiu       $s0, $s0, -0x707C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A230u;
            goto label_23a230;
        }
    }
    ctx->pc = 0x23A204u;
    // 0x23a204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a208: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x23a208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23a20c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x23a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23a210: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x23a210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x23a214: 0xc08e824  jal         func_23A090
    ctx->pc = 0x23A214u;
    SET_GPR_U32(ctx, 31, 0x23A21Cu);
    ctx->pc = 0x23A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A214u;
    // 0x23a218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    goto label_23a090;
    ctx->pc = 0x23A21Cu;
label_23a21c:
    // 0x23a21c: 0xc08e80a  jal         func_23A028
    ctx->pc = 0x23A21Cu;
    SET_GPR_U32(ctx, 31, 0x23A224u);
    ctx->pc = 0x23A220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A21Cu;
    // 0x23a220: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A028u, 0x23A21Cu, 0x23A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A224u;
label_23a224:
    // 0x23a224: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x23a224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23a228: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x23a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a22c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x23a22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23a230:
    // 0x23a230: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x23a230u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23a234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23a238: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x23a23c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23a23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x23a240: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23a240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a248: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x23a248u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x23a24c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23a24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23a250: 0x0  nop
    ctx->pc = 0x23a250u;
    // NOP
    // 0x23a254: 0x0  nop
    ctx->pc = 0x23a254u;
    // NOP
    // 0x23a258: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a258u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a25c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23a25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23a260: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x23a260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a264: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23a268: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23a268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23a26c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x23A26Cu;
    {
        const bool branch_taken_0x23a26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a26c) {
            ctx->pc = 0x23A270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A26Cu;
            // 0x23a270: 0xae43009c  sw          $v1, 0x9C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A28Cu;
            goto label_23a28c;
        }
    }
    ctx->pc = 0x23A274u;
    // 0x23a274: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x23a274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23a278: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x23a27c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a27cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23a280: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23a280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23a284: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23a288: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x23a288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_23a28c:
    // 0x23a28c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x23a290: 0x8c62ef80  lw          $v0, -0x1080($v1)
    ctx->pc = 0x23a290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BEF80u));
    // 0x23a294: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x23A294u;
    {
        const bool branch_taken_0x23a294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A294u;
        // 0x23a298: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a294) {
            ctx->pc = 0x23A344u;
            goto label_23a344;
        }
    }
    ctx->pc = 0x23A29Cu;
    // 0x23a29c: 0x0  nop
    ctx->pc = 0x23a29cu;
    // NOP
label_23a2a0:
    // 0x23a2a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x23a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a2a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x23a2a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x23a2a8: 0x54430025  bnel        $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x23A2A8u;
    {
        const bool branch_taken_0x23a2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23a2a8) {
            ctx->pc = 0x23A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A2A8u;
            // 0x23a2ac: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A340u;
            goto label_23a340;
        }
    }
    ctx->pc = 0x23A2B0u;
    // 0x23a2b0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23a2b4: 0xc08db20  jal         func_236C80
    ctx->pc = 0x23A2B4u;
    SET_GPR_U32(ctx, 31, 0x23A2BCu);
    ctx->pc = 0x23A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2B4u;
    // 0x23a2b8: 0x3c16004d  lui         $s6, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)77 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x23A2B4u, 0x23A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2BCu;
label_23a2bc:
    // 0x23a2bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23a2c0: 0xc08db02  jal         func_236C08
    ctx->pc = 0x23A2C0u;
    SET_GPR_U32(ctx, 31, 0x23A2C8u);
    ctx->pc = 0x23A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2C0u;
    // 0x23a2c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x23A2C0u, 0x23A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2C8u;
label_23a2c8:
    // 0x23a2c8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23a2cc: 0xc08db0e  jal         func_236C38
    ctx->pc = 0x23A2CCu;
    SET_GPR_U32(ctx, 31, 0x23A2D4u);
    ctx->pc = 0x23A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2CCu;
    // 0x23a2d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C38u, 0x23A2CCu, 0x23A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2D4u;
label_23a2d4:
    // 0x23a2d4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23a2d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23a2d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x23a2dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23A2DCu;
    {
        const bool branch_taken_0x23a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2dc) {
            ctx->pc = 0x23A2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A2DCu;
            // 0x23a2e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2E4u;
            goto label_23a2e4;
        }
    }
    ctx->pc = 0x23A2E4u;
label_23a2e4:
    // 0x23a2e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a2e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a2ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23a2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23a2f0: 0xc6c18fd0  lwc1        $f1, -0x7030($s6)
    ctx->pc = 0x23a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294938576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a2f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23a2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23a2f8: 0x1812  mflo        $v1
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x23a2fc: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x23a2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x23a300: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23a300u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a304: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23a308: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23a308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x23a30c: 0x0  nop
    ctx->pc = 0x23a30cu;
    // NOP
    // 0x23a310: 0x0  nop
    ctx->pc = 0x23a310u;
    // NOP
    // 0x23a314: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x23a314u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x23a318: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23a318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23a31c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23a320: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23a320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23a324: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23a324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x23a328: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x23a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x23a32c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23a330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23A334u;
    {
        const bool branch_taken_0x23a334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A334u;
        // 0x23a338: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a334) {
            ctx->pc = 0x23A344u;
            goto label_23a344;
        }
    }
    ctx->pc = 0x23A33Cu;
    // 0x23a33c: 0x0  nop
    ctx->pc = 0x23a33cu;
    // NOP
label_23a340:
    // 0x23a340: 0x3c16004d  lui         $s6, 0x4D
    ctx->pc = 0x23a340u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)77 << 16));
label_23a344:
    // 0x23a344: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x23a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_23a348:
    // 0x23a348: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23a34c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a350: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23a350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x23a354: 0x8ec28fd0  lw          $v0, -0x7030($s6)
    ctx->pc = 0x23a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294938576)));
    // 0x23a358: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x23a358u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x23a35c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23a35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a360:
    // 0x23a360: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23a360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a364: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23a364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a368: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23a368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a36c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23a36cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a370: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23a370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23a374: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x23a374u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a378: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x23a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23a37c: 0x3e00008  jr          $ra
    ctx->pc = 0x23A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A37Cu;
        // 0x23a380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A384u;
}
