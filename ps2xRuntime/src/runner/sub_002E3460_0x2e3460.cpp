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

// Function: sub_002E3460
// Address: 0x2e3460 - 0x2e3870
void sub_002E3460_0x2e3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3460_0x2e3460");
#endif

    switch (ctx->pc) {
        case 0x2e34e0u: goto label_2e34e0;
        case 0x2e3520u: goto label_2e3520;
        case 0x2e3554u: goto label_2e3554;
        case 0x2e3564u: goto label_2e3564;
        case 0x2e356cu: goto label_2e356c;
        case 0x2e35a4u: goto label_2e35a4;
        case 0x2e35b4u: goto label_2e35b4;
        case 0x2e35c4u: goto label_2e35c4;
        case 0x2e35d8u: goto label_2e35d8;
        case 0x2e3630u: goto label_2e3630;
        case 0x2e366cu: goto label_2e366c;
        case 0x2e367cu: goto label_2e367c;
        case 0x2e3684u: goto label_2e3684;
        case 0x2e36bcu: goto label_2e36bc;
        case 0x2e36ccu: goto label_2e36cc;
        case 0x2e36dcu: goto label_2e36dc;
        case 0x2e36ecu: goto label_2e36ec;
        case 0x2e3784u: goto label_2e3784;
        case 0x2e37acu: goto label_2e37ac;
        case 0x2e37e8u: goto label_2e37e8;
        default: break;
    }

    ctx->pc = 0x2e3460u;

    // 0x2e3460: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2e3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2e3464: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2e3464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2e3468: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e346c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e346cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e3470: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e3474: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e3474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e3478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e3478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e347c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e347cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e3480: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e3480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e348c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3494: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x2e3494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x2e3498: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x2e3498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x2e349c: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x2e349cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e34a0: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2e34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2e34a4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2e34a8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2e34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x2e34ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e34acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e34b0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x2e34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x2e34b4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e34b8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2e34b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e34bc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x2e34bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2e34c0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e34c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e34c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e34c8: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e34c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e34cc: 0x102000d0  beqz        $at, . + 4 + (0xD0 << 2)
    ctx->pc = 0x2E34CCu;
    {
        const bool branch_taken_0x2e34cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34CCu;
        // 0x2e34d0: 0x24940040  addiu       $s4, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34cc) {
            ctx->pc = 0x2E3810u;
            goto label_2e3810;
        }
    }
    ctx->pc = 0x2E34D4u;
    // 0x2e34d4: 0x8fbe00d0  lw          $fp, 0xD0($sp)
    ctx->pc = 0x2e34d4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e34d8: 0x24c3001c  addiu       $v1, $a2, 0x1C
    ctx->pc = 0x2e34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x2e34dc: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2e34dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_2e34e0:
    // 0x2e34e0: 0x93c40016  lbu         $a0, 0x16($fp)
    ctx->pc = 0x2e34e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 22)));
    // 0x2e34e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e34e8: 0x108300b3  beq         $a0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2E34E8u;
    {
        const bool branch_taken_0x2e34e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34E8u;
        // 0x2e34ec: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34e8) {
            ctx->pc = 0x2E37B8u;
            goto label_2e37b8;
        }
    }
    ctx->pc = 0x2E34F0u;
    // 0x2e34f0: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x2E34F0u;
    {
        const bool branch_taken_0x2e34f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e34f0) {
            ctx->pc = 0x2E3718u;
            goto label_2e3718;
        }
    }
    ctx->pc = 0x2E34F8u;
    // 0x2e34f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e34f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e34fc: 0x1083003e  beq         $a0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2E34FCu;
    {
        const bool branch_taken_0x2e34fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E3500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34FCu;
        // 0x2e3500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e34fc) {
            ctx->pc = 0x2E35F8u;
            goto label_2e35f8;
        }
    }
    ctx->pc = 0x2E3504u;
    // 0x2e3504: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3504u;
    {
        const bool branch_taken_0x2e3504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3504) {
            ctx->pc = 0x2E3518u;
            goto label_2e3518;
        }
    }
    ctx->pc = 0x2E350Cu;
    // 0x2e350c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2E350Cu;
    {
        const bool branch_taken_0x2e350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e350c) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E3514u;
    // 0x2e3514: 0x0  nop
    ctx->pc = 0x2e3514u;
    // NOP
label_2e3518:
    // 0x2e3518: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2E3518u;
    {
        const bool branch_taken_0x2e3518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3518u;
        // 0x2e351c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3518) {
            ctx->pc = 0x2E3818u;
            goto label_2e3818;
        }
    }
    ctx->pc = 0x2E3520u;
label_2e3520:
    // 0x2e3520: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e3520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e3524: 0x71b021  addu        $s6, $v1, $s1
    ctx->pc = 0x2e3524u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e3528: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x2e3528u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2e352c: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x2e352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2e3530: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e3530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e3534: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E3534u;
    {
        const bool branch_taken_0x2e3534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3534) {
            ctx->pc = 0x2E35C8u;
            goto label_2e35c8;
        }
    }
    ctx->pc = 0x2E353Cu;
    // 0x2e353c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3540: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e3540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e3544: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e3544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3548: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x2e3548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e354c: 0xc0b9710  jal         func_2E5C40
    ctx->pc = 0x2E354Cu;
    SET_GPR_U32(ctx, 31, 0x2E3554u);
    ctx->pc = 0x2E3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E354Cu;
    // 0x2e3550: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5C40u, 0x2E354Cu, 0x2E3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3554u;
label_2e3554:
    // 0x2e3554: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e3558: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2e3558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e355c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E355Cu;
    SET_GPR_U32(ctx, 31, 0x2E3564u);
    ctx->pc = 0x2E3560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E355Cu;
    // 0x2e3560: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E355Cu, 0x2E3564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3564u;
label_2e3564:
    // 0x2e3564: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E3564u;
    SET_GPR_U32(ctx, 31, 0x2E356Cu);
    ctx->pc = 0x2E3568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3564u;
    // 0x2e3568: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E3564u, 0x2E356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E356Cu;
label_2e356c:
    // 0x2e356c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x2e356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3570: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2e3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3574: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2e3574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e3578: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e357c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E357Cu;
    {
        const bool branch_taken_0x2e357c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e357c) {
            ctx->pc = 0x2E35C8u;
            goto label_2e35c8;
        }
    }
    ctx->pc = 0x2E3584u;
    // 0x2e3584: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e3584u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e3588: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e358c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e358cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3590: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e3590u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e3594: 0x0  nop
    ctx->pc = 0x2e3594u;
    // NOP
    // 0x2e3598: 0x0  nop
    ctx->pc = 0x2e3598u;
    // NOP
    // 0x2e359c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E359Cu;
    SET_GPR_U32(ctx, 31, 0x2E35A4u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E359Cu, 0x2E35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35A4u;
label_2e35a4:
    // 0x2e35a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e35a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e35a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35ac: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E35ACu;
    SET_GPR_U32(ctx, 31, 0x2E35B4u);
    ctx->pc = 0x2E35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35ACu;
    // 0x2e35b0: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E35ACu, 0x2E35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35B4u;
label_2e35b4:
    // 0x2e35b4: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x2e35b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e35b8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e35bc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E35BCu;
    SET_GPR_U32(ctx, 31, 0x2E35C4u);
    ctx->pc = 0x2E35C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35BCu;
    // 0x2e35c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E35BCu, 0x2E35C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35C4u;
label_2e35c4:
    // 0x2e35c4: 0x0  nop
    ctx->pc = 0x2e35c4u;
    // NOP
label_2e35c8:
    // 0x2e35c8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2e35c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2e35cc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2e35ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e35d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e35d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e35d4: 0x0  nop
    ctx->pc = 0x2e35d4u;
    // NOP
label_2e35d8:
    // 0x2e35d8: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2e35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e35dc: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x2e35dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2e35e0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x2e35e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e35e4: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2E35E4u;
    {
        const bool branch_taken_0x2e35e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e35e4) {
            ctx->pc = 0x2E3520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3520;
        }
    }
    ctx->pc = 0x2E35ECu;
    // 0x2e35ec: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2E35ECu;
    {
        const bool branch_taken_0x2e35ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e35ec) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E35F4u;
    // 0x2e35f4: 0x0  nop
    ctx->pc = 0x2e35f4u;
    // NOP
label_2e35f8:
    // 0x2e35f8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2e35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e35fc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x2e35fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e3600: 0x27d30014  addiu       $s3, $fp, 0x14
    ctx->pc = 0x2e3600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x2e3604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e3608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e360c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2e360cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3610: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2e3610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2e3614: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2e3614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e3618: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2e3618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2e361c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e361cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3620: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x2E3620u;
    {
        const bool branch_taken_0x2e3620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3620u;
        // 0x2e3624: 0x24920040  addiu       $s2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3620) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E3628u;
    // 0x2e3628: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x2e3628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e362c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e362cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e3630:
    // 0x2e3630: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2e3634: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x2e3634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2e3638: 0x76b821  addu        $s7, $v1, $s6
    ctx->pc = 0x2e3638u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2e363c: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x2e363cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2e3640: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e3640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e3644: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E3644u;
    {
        const bool branch_taken_0x2e3644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3644u;
        // 0x2e3648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3644) {
            ctx->pc = 0x2E36F0u;
            goto label_2e36f0;
        }
    }
    ctx->pc = 0x2E364Cu;
    // 0x2e364c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e364cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3650: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2e3650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3654: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e3654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3658: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e3658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e365c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e365cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3660: 0x27aa0120  addiu       $t2, $sp, 0x120
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3664: 0xc0b965c  jal         func_2E5970
    ctx->pc = 0x2E3664u;
    SET_GPR_U32(ctx, 31, 0x2E366Cu);
    ctx->pc = 0x2E3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3664u;
    // 0x2e3668: 0x27ab0110  addiu       $t3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5970u, 0x2E3664u, 0x2E366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E366Cu;
label_2e366c:
    // 0x2e366c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e3670: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e3674: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E3674u;
    SET_GPR_U32(ctx, 31, 0x2E367Cu);
    ctx->pc = 0x2E3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3674u;
    // 0x2e3678: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E3674u, 0x2E367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E367Cu;
label_2e367c:
    // 0x2e367c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E367Cu;
    SET_GPR_U32(ctx, 31, 0x2E3684u);
    ctx->pc = 0x2E3680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E367Cu;
    // 0x2e3680: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E367Cu, 0x2E3684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3684u;
label_2e3684:
    // 0x2e3684: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x2e3684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3688: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2e3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e368c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2e368cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e3690: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e3690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3694: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3694u;
    {
        const bool branch_taken_0x2e3694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3694) {
            ctx->pc = 0x2E36F0u;
            goto label_2e36f0;
        }
    }
    ctx->pc = 0x2E369Cu;
    // 0x2e369c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2e369cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e36a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e36a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e36a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e36a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e36ac: 0x0  nop
    ctx->pc = 0x2e36acu;
    // NOP
    // 0x2e36b0: 0x0  nop
    ctx->pc = 0x2e36b0u;
    // NOP
    // 0x2e36b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E36B4u;
    SET_GPR_U32(ctx, 31, 0x2E36BCu);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E36B4u, 0x2E36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36BCu;
label_2e36bc:
    // 0x2e36bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e36bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e36c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36c4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E36C4u;
    SET_GPR_U32(ctx, 31, 0x2E36CCu);
    ctx->pc = 0x2E36C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36C4u;
    // 0x2e36c8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E36C4u, 0x2E36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36CCu;
label_2e36cc:
    // 0x2e36cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e36d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36d4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E36D4u;
    SET_GPR_U32(ctx, 31, 0x2E36DCu);
    ctx->pc = 0x2E36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36D4u;
    // 0x2e36d8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E36D4u, 0x2E36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36DCu;
label_2e36dc:
    // 0x2e36dc: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x2e36dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e36e0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e36e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e36e4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E36E4u;
    SET_GPR_U32(ctx, 31, 0x2E36ECu);
    ctx->pc = 0x2E36E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36E4u;
    // 0x2e36e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E36E4u, 0x2E36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36ECu;
label_2e36ec:
    // 0x2e36ec: 0x0  nop
    ctx->pc = 0x2e36ecu;
    // NOP
label_2e36f0:
    // 0x2e36f0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x2e36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e36f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e36f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e36f8: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x2e36f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2e36fc: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2e36fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2e3700: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2e3700u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3704: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2E3704u;
    {
        const bool branch_taken_0x2e3704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3704u;
        // 0x2e3708: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3704) {
            ctx->pc = 0x2E3630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3630;
        }
    }
    ctx->pc = 0x2E370Cu;
    // 0x2e370c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2E370Cu;
    {
        const bool branch_taken_0x2e370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e370c) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E3714u;
    // 0x2e3714: 0x0  nop
    ctx->pc = 0x2e3714u;
    // NOP
label_2e3718:
    // 0x2e3718: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2e3718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2e371c: 0x246368d0  addiu       $v1, $v1, 0x68D0
    ctx->pc = 0x2e371cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26832));
    // 0x2e3720: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2e3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e3724: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e3724u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E68D0u));
    // 0x2e3728: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2e3728u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2e372c: 0xc7c00018  lwc1        $f0, 0x18($fp)
    ctx->pc = 0x2e372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3730: 0x27a300f4  addiu       $v1, $sp, 0xF4
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2e3734: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2e3734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2e3738: 0xc7c0001c  lwc1        $f0, 0x1C($fp)
    ctx->pc = 0x2e3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e373c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e3740: 0xc7c00020  lwc1        $f0, 0x20($fp)
    ctx->pc = 0x2e3740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3744: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x2e3744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2e3748: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e374c: 0x93c40017  lbu         $a0, 0x17($fp)
    ctx->pc = 0x2e374cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 23)));
    // 0x2e3750: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x2e3750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2e3754: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3754u;
    {
        const bool branch_taken_0x2e3754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3754) {
            ctx->pc = 0x2E3790u;
            goto label_2e3790;
        }
    }
    ctx->pc = 0x2E375Cu;
    // 0x2e375c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e3760: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E3760u;
    {
        const bool branch_taken_0x2e3760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3760) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E3768u;
    // 0x2e3768: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2e3768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e376c: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x2e376cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x2e3770: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e3774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3778: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2e3778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e377c: 0xc041442  jal         func_105108
    ctx->pc = 0x2E377Cu;
    SET_GPR_U32(ctx, 31, 0x2E3784u);
    ctx->pc = 0x2E3780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E377Cu;
    // 0x2e3780: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E377Cu, 0x2E3784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3784u;
label_2e3784:
    // 0x2e3784: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3784u;
    {
        const bool branch_taken_0x2e3784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3784) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E378Cu;
    // 0x2e378c: 0x0  nop
    ctx->pc = 0x2e378cu;
    // NOP
label_2e3790:
    // 0x2e3790: 0x3082007f  andi        $v0, $a0, 0x7F
    ctx->pc = 0x2e3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x2e3794: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e3794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e3798: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e3798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e379c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2e379cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2e37a0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2e37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2e37a4: 0xc041442  jal         func_105108
    ctx->pc = 0x2E37A4u;
    SET_GPR_U32(ctx, 31, 0x2E37ACu);
    ctx->pc = 0x2E37A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37A4u;
    // 0x2e37a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E37A4u, 0x2E37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37ACu;
label_2e37ac:
    // 0x2e37ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E37ACu;
    {
        const bool branch_taken_0x2e37ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e37ac) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E37B4u;
    // 0x2e37b4: 0x0  nop
    ctx->pc = 0x2e37b4u;
    // NOP
label_2e37b8:
    // 0x2e37b8: 0xc7c20020  lwc1        $f2, 0x20($fp)
    ctx->pc = 0x2e37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e37bc: 0xc7c10018  lwc1        $f1, 0x18($fp)
    ctx->pc = 0x2e37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e37c0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x2e37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e37c4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2e37c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2e37c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e37c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e37cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E37CCu;
    {
        const bool branch_taken_0x2e37cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E37CCu;
        // 0x2e37d0: 0x27c30014  addiu       $v1, $fp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37cc) {
            ctx->pc = 0x2E37E8u;
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E37D4u;
    // 0x2e37d4: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x2e37d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x2e37d8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e37d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e37dc: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x2e37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e37e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E37E0u;
    SET_GPR_U32(ctx, 31, 0x2E37E8u);
    ctx->pc = 0x2E37E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E37E0u;
    // 0x2e37e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E37E0u, 0x2E37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E37E8u;
label_2e37e8:
    // 0x2e37e8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2e37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e37ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e37f0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2e37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2e37f4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e37f8: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x2e37f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2e37fc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2e37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e3800: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2e3800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e3804: 0x1460ff36  bnez        $v1, . + 4 + (-0xCA << 2)
    ctx->pc = 0x2E3804u;
    {
        const bool branch_taken_0x2e3804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3804u;
        // 0x2e3808: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3804) {
            ctx->pc = 0x2E34E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e34e0;
        }
    }
    ctx->pc = 0x2E380Cu;
    // 0x2e380c: 0x0  nop
    ctx->pc = 0x2e380cu;
    // NOP
label_2e3810:
    // 0x2e3810: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E3810u;
    {
        const bool branch_taken_0x2e3810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3810) {
            ctx->pc = 0x2E3840u;
            goto label_2e3840;
        }
    }
    ctx->pc = 0x2E3818u;
label_2e3818:
    // 0x2e3818: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2e3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2e381c: 0x90630006  lbu         $v1, 0x6($v1)
    ctx->pc = 0x2e381cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2e3820: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2e3820u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e3824: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2E3824u;
    {
        const bool branch_taken_0x2e3824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3824) {
            ctx->pc = 0x2E37E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e37e8;
        }
    }
    ctx->pc = 0x2E382Cu;
    // 0x2e382c: 0x8fb000c0  lw          $s0, 0xC0($sp)
    ctx->pc = 0x2e382cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3830: 0x27d20014  addiu       $s2, $fp, 0x14
    ctx->pc = 0x2e3830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x2e3834: 0x1000ff68  b           . + 4 + (-0x98 << 2)
    ctx->pc = 0x2E3834u;
    {
        const bool branch_taken_0x2e3834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3834u;
        // 0x2e3838: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3834) {
            ctx->pc = 0x2E35D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e35d8;
        }
    }
    ctx->pc = 0x2E383Cu;
    // 0x2e383c: 0x0  nop
    ctx->pc = 0x2e383cu;
    // NOP
label_2e3840:
    // 0x2e3840: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e3840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3844: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e3844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3848: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e3848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e384c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e384cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e3850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e385c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e385cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3868: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3868u;
        // 0x2e386c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3870u;
}
