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

// Function: sub_00193130
// Address: 0x193130 - 0x193404
void sub_00193130_0x193130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193130_0x193130");
#endif

    switch (ctx->pc) {
        case 0x1931b8u: goto label_1931b8;
        case 0x193210u: goto label_193210;
        case 0x1932a8u: goto label_1932a8;
        case 0x193300u: goto label_193300;
        case 0x193318u: goto label_193318;
        case 0x193328u: goto label_193328;
        case 0x193338u: goto label_193338;
        default: break;
    }

    ctx->pc = 0x193130u;

    // 0x193130: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x193130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x193134: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x193134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x193138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x193138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19313c: 0x2463d7b8  addiu       $v1, $v1, -0x2848
    ctx->pc = 0x19313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956984));
    // 0x193140: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x193140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x193144: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x193144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x193148: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x193148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19314c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19314cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193154: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x193154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193158: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19315c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x19315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193160: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x193160u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193164: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x193164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193168: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19316c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19316cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193170: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x193170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x193174: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
    ctx->pc = 0x193174u;
    {
        const bool branch_taken_0x193174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193174u;
        // 0x193178: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193174) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x19317Cu;
    // 0x19317c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x193180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x193184: 0x248457a0  addiu       $a0, $a0, 0x57A0
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22432));
    // 0x193188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19318c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193190: 0x600008  jr          $v1
    ctx->pc = 0x193190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193198u: goto label_193198;
            case 0x193220u: goto label_193220;
            case 0x193238u: goto label_193238;
            case 0x193248u: goto label_193248;
            case 0x193260u: goto label_193260;
            case 0x193278u: goto label_193278;
            case 0x193348u: goto label_193348;
            case 0x193360u: goto label_193360;
            case 0x1933E0u: goto label_1933e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x193198u;
label_193198:
    // 0x193198: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19319c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1931a0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1931a4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1931a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1931a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1931a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1931ac: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x1931acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1931b0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1931B0u;
    SET_GPR_U32(ctx, 31, 0x1931B8u);
    ctx->pc = 0x1931B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1931B0u;
    // 0x1931b4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x1931B0u, 0x1931B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931B8u;
label_1931b8:
    // 0x1931b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1931b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1931bc: 0x0  nop
    ctx->pc = 0x1931bcu;
    // NOP
    // 0x1931c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1931c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1931c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1931C4u;
    {
        const bool branch_taken_0x1931c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1931c4) {
            ctx->pc = 0x1931E8u;
            goto label_1931e8;
        }
    }
    ctx->pc = 0x1931CCu;
    // 0x1931cc: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1931ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1931d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1931d4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1931d8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1931d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1931dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1931DCu;
    {
        const bool branch_taken_0x1931dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1931E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1931DCu;
        // 0x1931e0: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1931dc) {
            ctx->pc = 0x193210u;
            goto label_193210;
        }
    }
    ctx->pc = 0x1931E4u;
    // 0x1931e4: 0x0  nop
    ctx->pc = 0x1931e4u;
    // NOP
label_1931e8:
    // 0x1931e8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1931e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1931ec: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1931ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1931f0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1931f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1931f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1931f8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1931fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1931fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x193200: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x193204: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x193208: 0xc0414c0  jal         func_105300
    ctx->pc = 0x193208u;
    SET_GPR_U32(ctx, 31, 0x193210u);
    ctx->pc = 0x19320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193208u;
    // 0x19320c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x193208u, 0x193210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193210u;
label_193210:
    // 0x193210: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193214: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x193214u;
    {
        const bool branch_taken_0x193214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193214u;
        // 0x193218: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193214) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x19321Cu;
    // 0x19321c: 0x0  nop
    ctx->pc = 0x19321cu;
    // NOP
label_193220:
    // 0x193220: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x193220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x193224: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x193224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x193228: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19322c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19322Cu;
    {
        const bool branch_taken_0x19322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19322c) {
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x193234u;
    // 0x193234: 0x0  nop
    ctx->pc = 0x193234u;
    // NOP
label_193238:
    // 0x193238: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x193238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19323c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19323cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193240: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x193240u;
    {
        const bool branch_taken_0x193240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193240) {
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x193248u;
label_193248:
    // 0x193248: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x193248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x19324c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x19324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x193250: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193254: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x193254u;
    {
        const bool branch_taken_0x193254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193254) {
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x19325Cu;
    // 0x19325c: 0x0  nop
    ctx->pc = 0x19325cu;
    // NOP
label_193260:
    // 0x193260: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x193260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x193264: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x193264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x193268: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x193268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19326c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19326Cu;
    {
        const bool branch_taken_0x19326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19326c) {
            ctx->pc = 0x193288u;
            goto label_193288;
        }
    }
    ctx->pc = 0x193274u;
    // 0x193274: 0x0  nop
    ctx->pc = 0x193274u;
    // NOP
label_193278:
    // 0x193278: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x193278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x19327c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x193280: 0xc454001c  lwc1        $f20, 0x1C($v0)
    ctx->pc = 0x193280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193284: 0x0  nop
    ctx->pc = 0x193284u;
    // NOP
label_193288:
    // 0x193288: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19328c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x19328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x193290: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x193290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x193294: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193298: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19329c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1932a0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1932A0u;
    SET_GPR_U32(ctx, 31, 0x1932A8u);
    ctx->pc = 0x1932A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932A0u;
    // 0x1932a4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x1932A0u, 0x1932A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932A8u;
label_1932a8:
    // 0x1932a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1932a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1932ac: 0x0  nop
    ctx->pc = 0x1932acu;
    // NOP
    // 0x1932b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1932b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1932b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1932B4u;
    {
        const bool branch_taken_0x1932b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1932b4) {
            ctx->pc = 0x1932D8u;
            goto label_1932d8;
        }
    }
    ctx->pc = 0x1932BCu;
    // 0x1932bc: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1932c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1932c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932c4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1932c8: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x1932c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1932cc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1932ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1932d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1932D0u;
    {
        const bool branch_taken_0x1932d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1932D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1932D0u;
        // 0x1932d4: 0x7e240000  sq          $a0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932d0) {
            ctx->pc = 0x193338u;
            goto label_193338;
        }
    }
    ctx->pc = 0x1932D8u;
label_1932d8:
    // 0x1932d8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1932dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1932dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1932e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1932e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932e4: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1932e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1932e8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1932ec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1932f0: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1932f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1932f4: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x1932f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1932f8: 0xc0414c0  jal         func_105300
    ctx->pc = 0x1932F8u;
    SET_GPR_U32(ctx, 31, 0x193300u);
    ctx->pc = 0x1932FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1932F8u;
    // 0x1932fc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x1932F8u, 0x193300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193300u;
label_193300:
    // 0x193300: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x193300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x193304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193308: 0x2623021  addu        $a2, $s3, $v0
    ctx->pc = 0x193308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19330c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x193310: 0xc065120  jal         func_194480
    ctx->pc = 0x193310u;
    SET_GPR_U32(ctx, 31, 0x193318u);
    ctx->pc = 0x193314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193310u;
    // 0x193314: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x194480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194480u, 0x193310u, 0x193318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193318u;
label_193318:
    // 0x193318: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19331c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19331cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x193320: 0xc0414dc  jal         func_105370
    ctx->pc = 0x193320u;
    SET_GPR_U32(ctx, 31, 0x193328u);
    ctx->pc = 0x193324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193320u;
    // 0x193324: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x193320u, 0x193328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193328u;
label_193328:
    // 0x193328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19332c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x193330: 0xc0414ca  jal         func_105328
    ctx->pc = 0x193330u;
    SET_GPR_U32(ctx, 31, 0x193338u);
    ctx->pc = 0x193334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193330u;
    // 0x193334: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x193330u, 0x193338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193338u;
label_193338:
    // 0x193338: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19333c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x19333Cu;
    {
        const bool branch_taken_0x19333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19333Cu;
        // 0x193340: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19333c) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x193344u;
    // 0x193344: 0x0  nop
    ctx->pc = 0x193344u;
    // NOP
label_193348:
    // 0x193348: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x193348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x19334c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193350: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x193350u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193354: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x193354u;
    {
        const bool branch_taken_0x193354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193354u;
        // 0x193358: 0x7e240000  sq          $a0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193354) {
            ctx->pc = 0x1933E0u;
            goto label_1933e0;
        }
    }
    ctx->pc = 0x19335Cu;
    // 0x19335c: 0x0  nop
    ctx->pc = 0x19335cu;
    // NOP
label_193360:
    // 0x193360: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x193360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x193364: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x193364u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193368: 0x8c2495b4  lw          $a0, -0x6A4C($at)
    ctx->pc = 0x193368u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8095B4u));
    // 0x19336c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x19336cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x193370: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x193370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x193374: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x193374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x193378: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x193378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19337c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19337cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193380: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193384: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x193384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x193388: 0x8c2595b4  lw          $a1, -0x6A4C($at)
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8095B4u));
    // 0x19338c: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x19338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x193390: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x193390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193394: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x193398: 0x8c840080  lw          $a0, 0x80($a0)
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x19339c: 0xc4830034  lwc1        $f3, 0x34($a0)
    ctx->pc = 0x19339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1933a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1933a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1933a4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1933a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1933a8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1933a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1933ac: 0x8c2495b4  lw          $a0, -0x6A4C($at)
    ctx->pc = 0x1933acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8095B4u));
    // 0x1933b0: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1933b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1933b4: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1933b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1933b8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1933b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1933bc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1933bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1933c0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1933c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1933c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1933c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1933c8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1933c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1933cc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1933ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1933d0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1933d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1933d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1933d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1933d8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1933d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1933dc: 0x0  nop
    ctx->pc = 0x1933dcu;
    // NOP
label_1933e0:
    // 0x1933e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1933e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1933e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1933e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1933e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1933e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1933ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1933ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1933f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1933f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1933f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1933f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1933f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1933f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1933fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1933FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1933FCu;
        // 0x193400: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1933FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193404u;
}
