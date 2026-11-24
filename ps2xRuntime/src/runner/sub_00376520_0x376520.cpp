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

// Function: sub_00376520
// Address: 0x376520 - 0x376678
void sub_00376520_0x376520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376520_0x376520");
#endif

    switch (ctx->pc) {
        case 0x376588u: goto label_376588;
        case 0x3765b0u: goto label_3765b0;
        case 0x3765dcu: goto label_3765dc;
        case 0x376628u: goto label_376628;
        default: break;
    }

    ctx->pc = 0x376520u;

    // 0x376520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x376520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x376524: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x376524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x376528: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x376528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37652c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x376530: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x376530u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376534: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x376534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x376538: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x376538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37653c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x376540: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x376540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376544: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x376544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x376548: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x376548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37654c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x376550: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x376550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376554: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x376558: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x376558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37655c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376560: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x376560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376564: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x376564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x376568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37656c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x37656cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x376570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376578: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x376578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x37657c: 0x250864b0  addiu       $t0, $t0, 0x64B0
    ctx->pc = 0x37657cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25776));
    // 0x376580: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x376580u;
    SET_GPR_U32(ctx, 31, 0x376588u);
    ctx->pc = 0x376584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376580u;
    // 0x376584: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x376580u, 0x376588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376588u;
label_376588:
    // 0x376588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37658c: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x37658Cu;
    {
        const bool branch_taken_0x37658c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37658Cu;
        // 0x376590: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37658c) {
            ctx->pc = 0x376640u;
            goto label_376640;
        }
    }
    ctx->pc = 0x376594u;
    // 0x376594: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x376594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37659c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x37659cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3765a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3765a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3765a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3765a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765a8: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3765A8u;
    SET_GPR_U32(ctx, 31, 0x3765B0u);
    ctx->pc = 0x3765ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3765A8u;
    // 0x3765ac: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3765A8u, 0x3765B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765B0u;
label_3765b0:
    // 0x3765b0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3765b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3765b4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3765b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3765b8: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3765b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3765bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3765bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3765c0: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x3765c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3765c4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3765c8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3765c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3765cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3765ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3765d0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3765d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3765d4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3765D4u;
    SET_GPR_U32(ctx, 31, 0x3765DCu);
    ctx->pc = 0x3765D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3765D4u;
    // 0x3765d8: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3765D4u, 0x3765DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765DCu;
label_3765dc:
    // 0x3765dc: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3765dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3765e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3765e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3765e4: 0xae030554  sw          $v1, 0x554($s0)
    ctx->pc = 0x3765e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 3));
    // 0x3765e8: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x3765e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x3765ec: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x3765ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x3765f0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x3765f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x3765f4: 0xa21e0559  sb          $fp, 0x559($s0)
    ctx->pc = 0x3765f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 30));
    // 0x3765f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3765f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3765fc: 0xc66f0024  lwc1        $f15, 0x24($s3)
    ctx->pc = 0x3765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x376600: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x376600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376604: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x376604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x376608: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x376608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x37660c: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x37660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x376610: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x376610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376614: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x376614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x376618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37661c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37661cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x376620: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x376620u;
    SET_GPR_U32(ctx, 31, 0x376628u);
    ctx->pc = 0x376624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376620u;
    // 0x376624: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x376620u, 0x376628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376628u;
label_376628:
    // 0x376628: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x376628u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37662c: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x37662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x376630: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x376630u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x376634: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x376634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x376638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x376638u;
    {
        const bool branch_taken_0x376638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376638u;
        // 0x37663c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376638) {
            ctx->pc = 0x376648u;
            goto label_376648;
        }
    }
    ctx->pc = 0x376640u;
label_376640:
    // 0x376640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376644: 0x0  nop
    ctx->pc = 0x376644u;
    // NOP
label_376648:
    // 0x376648: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x376648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37664c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37664cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x376650: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x376650u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x376654: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x376654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x376658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x376658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37665c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37665cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376660: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x376660u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37666c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37666cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376670: 0x3e00008  jr          $ra
    ctx->pc = 0x376670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376670u;
        // 0x376674: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376678u;
}
