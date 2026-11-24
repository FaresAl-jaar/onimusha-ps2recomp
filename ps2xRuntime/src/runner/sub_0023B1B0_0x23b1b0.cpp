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

// Function: sub_0023B1B0
// Address: 0x23b1b0 - 0x23b294
void sub_0023B1B0_0x23b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B1B0_0x23b1b0");
#endif

    switch (ctx->pc) {
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        case 0x23b248u: goto label_23b248;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        default: break;
    }

    ctx->pc = 0x23b1b0u;

label_23b1b0:
    // 0x23b1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23b1b4:
    // 0x23b1b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23b1b8:
    // 0x23b1b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23b1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b1bc:
    // 0x23b1bc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23b1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23b1c0:
    // 0x23b1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b1c4:
    // 0x23b1c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23b1c8:
    // 0x23b1c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23b1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23b1cc:
    // 0x23b1cc: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_23b1d0:
    if (ctx->pc == 0x23B1D0u) {
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1D4u;
        goto label_23b1d4;
    }
    ctx->pc = 0x23B1CCu;
    {
        const bool branch_taken_0x23b1cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1CCu;
        // 0x23b1d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1cc) {
            ctx->pc = 0x23B1F0u;
            goto label_23b1f0;
        }
    }
    ctx->pc = 0x23B1D4u;
label_23b1d4:
    // 0x23b1d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23b1d8:
    // 0x23b1d8: 0xc08baa4  jal         func_22EA90
label_23b1dc:
    if (ctx->pc == 0x23B1DCu) {
        ctx->pc = 0x23B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1D8u;
        // 0x23b1dc: 0x2484b458  addiu       $a0, $a0, -0x4BA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1E0u;
        goto label_23b1e0;
    }
    ctx->pc = 0x23B1D8u;
    SET_GPR_U32(ctx, 31, 0x23B1E0u);
    ctx->pc = 0x23B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B1D8u;
    // 0x23b1dc: 0x2484b458  addiu       $a0, $a0, -0x4BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B1D8u, 0x23B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1E0u;
label_23b1e0:
    // 0x23b1e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23b1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_23b1e4:
    // 0x23b1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23b1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b1e8:
    // 0x23b1e8: 0x10000024  b           . + 4 + (0x24 << 2)
label_23b1ec:
    if (ctx->pc == 0x23B1ECu) {
        ctx->pc = 0x23B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1E8u;
        // 0x23b1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B1F0u;
        goto label_23b1f0;
    }
    ctx->pc = 0x23B1E8u;
    {
        const bool branch_taken_0x23b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1E8u;
        // 0x23b1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1e8) {
            ctx->pc = 0x23B27Cu;
            goto label_23b27c;
        }
    }
    ctx->pc = 0x23B1F0u;
label_23b1f0:
    // 0x23b1f0: 0xc08e73e  jal         func_239CF8
label_23b1f4:
    if (ctx->pc == 0x23B1F4u) {
        ctx->pc = 0x23B1F8u;
        goto label_23b1f8;
    }
    ctx->pc = 0x23B1F0u;
    SET_GPR_U32(ctx, 31, 0x23B1F8u);
    ctx->pc = 0x239CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CF8u, 0x23B1F0u, 0x23B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B1F8u;
label_23b1f8:
    // 0x23b1f8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23b1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_23b1fc:
    // 0x23b1fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23b200:
    if (ctx->pc == 0x23B200u) {
        ctx->pc = 0x23B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1FCu;
        // 0x23b200: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B204u;
        goto label_23b204;
    }
    ctx->pc = 0x23B1FCu;
    {
        const bool branch_taken_0x23b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B1FCu;
        // 0x23b200: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b1fc) {
            ctx->pc = 0x23B278u;
            goto label_23b278;
        }
    }
    ctx->pc = 0x23B204u;
label_23b204:
    // 0x23b204: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x23b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_23b208:
    // 0x23b208: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_23b20c:
    if (ctx->pc == 0x23B20Cu) {
        ctx->pc = 0x23B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B208u;
        // 0x23b20c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B210u;
        goto label_23b210;
    }
    ctx->pc = 0x23B208u;
    {
        const bool branch_taken_0x23b208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B208u;
        // 0x23b20c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b208) {
            ctx->pc = 0x23B278u;
            goto label_23b278;
        }
    }
    ctx->pc = 0x23B210u;
label_23b210:
    // 0x23b210: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b214:
    // 0x23b214: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23b214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b218:
    // 0x23b218: 0x40f809  jalr        $v0
label_23b21c:
    if (ctx->pc == 0x23B21Cu) {
        ctx->pc = 0x23B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B218u;
        // 0x23b21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B220u;
        goto label_23b220;
    }
    ctx->pc = 0x23B218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B220u);
        ctx->pc = 0x23B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B218u;
        // 0x23b21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B218u, 0x23B220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B220u;
label_23b220:
    // 0x23b220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23b224:
    // 0x23b224: 0xc08e956  jal         func_23A558
label_23b228:
    if (ctx->pc == 0x23B228u) {
        ctx->pc = 0x23B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B224u;
        // 0x23b228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B22Cu;
        goto label_23b22c;
    }
    ctx->pc = 0x23B224u;
    SET_GPR_U32(ctx, 31, 0x23B22Cu);
    ctx->pc = 0x23B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B224u;
    // 0x23b228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A558u, 0x23B224u, 0x23B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B22Cu;
label_23b22c:
    // 0x23b22c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23b22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b230:
    // 0x23b230: 0xc08e934  jal         func_23A4D0
label_23b234:
    if (ctx->pc == 0x23B234u) {
        ctx->pc = 0x23B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B230u;
        // 0x23b234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B238u;
        goto label_23b238;
    }
    ctx->pc = 0x23B230u;
    SET_GPR_U32(ctx, 31, 0x23B238u);
    ctx->pc = 0x23B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B230u;
    // 0x23b234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4D0u, 0x23B230u, 0x23B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B238u;
label_23b238:
    // 0x23b238: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x23b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_23b23c:
    // 0x23b23c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_23b240:
    // 0x23b240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23b240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23b244:
    // 0x23b244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23b244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_23b248:
    // 0x23b248: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_23b24c:
    // 0x23b24c: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x23b24cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23b250:
    // 0x23b250: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_23b254:
    if (ctx->pc == 0x23B254u) {
        ctx->pc = 0x23B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B250u;
        // 0x23b254: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B258u;
        goto label_23b258;
    }
    ctx->pc = 0x23B250u;
    {
        const bool branch_taken_0x23b250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b250) {
            ctx->pc = 0x23B254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B250u;
            // 0x23b254: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B258u;
            goto label_23b258;
        }
    }
    ctx->pc = 0x23B258u;
label_23b258:
    // 0x23b258: 0x8012  mflo        $s0
    ctx->pc = 0x23b258u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_23b25c:
    // 0x23b25c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_23b260:
    // 0x23b260: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x23b260u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23b264:
    // 0x23b264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23b264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23b268:
    // 0x23b268: 0x0  nop
    ctx->pc = 0x23b268u;
    // NOP
label_23b26c:
    // 0x23b26c: 0x0  nop
    ctx->pc = 0x23b26cu;
    // NOP
label_23b270:
    // 0x23b270: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x23b270u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_23b274:
    // 0x23b274: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x23b274u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_23b278:
    // 0x23b278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b27c:
    // 0x23b27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b280:
    // 0x23b280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b284:
    // 0x23b284: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23b284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b288:
    // 0x23b288: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23b28c:
    // 0x23b28c: 0x3e00008  jr          $ra
label_23b290:
    if (ctx->pc == 0x23B290u) {
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B294u;
        goto label_fallthrough_0x23b28c;
    }
    ctx->pc = 0x23B28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B28Cu;
        // 0x23b290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b28c:
    ctx->pc = 0x23B294u;
}
