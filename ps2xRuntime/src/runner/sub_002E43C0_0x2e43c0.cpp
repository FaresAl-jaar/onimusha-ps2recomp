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

// Function: sub_002E43C0
// Address: 0x2e43c0 - 0x2e4df4
void sub_002E43C0_0x2e43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E43C0_0x2e43c0");
#endif

    switch (ctx->pc) {
        case 0x2e4414u: goto label_2e4414;
        case 0x2e4488u: goto label_2e4488;
        case 0x2e44c4u: goto label_2e44c4;
        case 0x2e44d4u: goto label_2e44d4;
        case 0x2e44e4u: goto label_2e44e4;
        case 0x2e4504u: goto label_2e4504;
        case 0x2e4554u: goto label_2e4554;
        case 0x2e458cu: goto label_2e458c;
        case 0x2e459cu: goto label_2e459c;
        case 0x2e45b0u: goto label_2e45b0;
        case 0x2e45c0u: goto label_2e45c0;
        case 0x2e45d0u: goto label_2e45d0;
        case 0x2e45e0u: goto label_2e45e0;
        case 0x2e45f8u: goto label_2e45f8;
        case 0x2e4608u: goto label_2e4608;
        case 0x2e4610u: goto label_2e4610;
        case 0x2e4634u: goto label_2e4634;
        case 0x2e4644u: goto label_2e4644;
        case 0x2e46a8u: goto label_2e46a8;
        case 0x2e46f4u: goto label_2e46f4;
        case 0x2e4704u: goto label_2e4704;
        case 0x2e4714u: goto label_2e4714;
        case 0x2e4738u: goto label_2e4738;
        case 0x2e4740u: goto label_2e4740;
        case 0x2e4774u: goto label_2e4774;
        case 0x2e4784u: goto label_2e4784;
        case 0x2e4798u: goto label_2e4798;
        case 0x2e47a8u: goto label_2e47a8;
        case 0x2e47c0u: goto label_2e47c0;
        case 0x2e47d0u: goto label_2e47d0;
        case 0x2e47d8u: goto label_2e47d8;
        case 0x2e47fcu: goto label_2e47fc;
        case 0x2e480cu: goto label_2e480c;
        case 0x2e4820u: goto label_2e4820;
        case 0x2e4830u: goto label_2e4830;
        case 0x2e4858u: goto label_2e4858;
        case 0x2e48a8u: goto label_2e48a8;
        case 0x2e48d0u: goto label_2e48d0;
        case 0x2e48e0u: goto label_2e48e0;
        case 0x2e48f0u: goto label_2e48f0;
        case 0x2e4924u: goto label_2e4924;
        case 0x2e492cu: goto label_2e492c;
        case 0x2e4960u: goto label_2e4960;
        case 0x2e4970u: goto label_2e4970;
        case 0x2e4988u: goto label_2e4988;
        case 0x2e4998u: goto label_2e4998;
        case 0x2e49c8u: goto label_2e49c8;
        case 0x2e49d0u: goto label_2e49d0;
        case 0x2e4a04u: goto label_2e4a04;
        case 0x2e4a14u: goto label_2e4a14;
        case 0x2e4a2cu: goto label_2e4a2c;
        case 0x2e4a3cu: goto label_2e4a3c;
        case 0x2e4a50u: goto label_2e4a50;
        case 0x2e4a60u: goto label_2e4a60;
        case 0x2e4a78u: goto label_2e4a78;
        case 0x2e4aa0u: goto label_2e4aa0;
        case 0x2e4af0u: goto label_2e4af0;
        case 0x2e4b18u: goto label_2e4b18;
        case 0x2e4b28u: goto label_2e4b28;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4b6cu: goto label_2e4b6c;
        case 0x2e4b74u: goto label_2e4b74;
        case 0x2e4b9cu: goto label_2e4b9c;
        case 0x2e4bacu: goto label_2e4bac;
        case 0x2e4be0u: goto label_2e4be0;
        case 0x2e4be8u: goto label_2e4be8;
        case 0x2e4c1cu: goto label_2e4c1c;
        case 0x2e4c2cu: goto label_2e4c2c;
        case 0x2e4c40u: goto label_2e4c40;
        case 0x2e4c50u: goto label_2e4c50;
        case 0x2e4c68u: goto label_2e4c68;
        case 0x2e4ca0u: goto label_2e4ca0;
        case 0x2e4cbcu: goto label_2e4cbc;
        case 0x2e4cccu: goto label_2e4ccc;
        case 0x2e4ce0u: goto label_2e4ce0;
        case 0x2e4d0cu: goto label_2e4d0c;
        case 0x2e4d34u: goto label_2e4d34;
        case 0x2e4d40u: goto label_2e4d40;
        case 0x2e4d70u: goto label_2e4d70;
        case 0x2e4d80u: goto label_2e4d80;
        case 0x2e4d94u: goto label_2e4d94;
        case 0x2e4da4u: goto label_2e4da4;
        default: break;
    }

    ctx->pc = 0x2e43c0u;

    // 0x2e43c0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2e43c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e43c8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e43cc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e43d0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2e43d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43d4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e43d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e43d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2e43d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e43e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e43e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e43e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e43e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e43ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e43ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e43f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e43f4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e43f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43f8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e43f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e43fc: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2e43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e4400: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e4400u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4404: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2e4404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e4408: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e4408u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e440c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E440Cu;
    SET_GPR_U32(ctx, 31, 0x2E4414u);
    ctx->pc = 0x2E4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E440Cu;
    // 0x2e4410: 0x3c107000  lui         $s0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E440Cu, 0x2E4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4414u;
label_2e4414:
    // 0x2e4414: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2e4414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2e4418: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e4418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e441c: 0x1083019e  beq         $a0, $v1, . + 4 + (0x19E << 2)
    ctx->pc = 0x2E441Cu;
    {
        const bool branch_taken_0x2e441c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e441c) {
            ctx->pc = 0x2E4A98u;
            goto label_2e4a98;
        }
    }
    ctx->pc = 0x2E4424u;
    // 0x2e4424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e4428: 0x10830109  beq         $a0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x2E4428u;
    {
        const bool branch_taken_0x2e4428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4428) {
            ctx->pc = 0x2E4850u;
            goto label_2e4850;
        }
    }
    ctx->pc = 0x2E4430u;
    // 0x2e4430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4434: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2E4434u;
    {
        const bool branch_taken_0x2e4434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4434) {
            ctx->pc = 0x2E4660u;
            goto label_2e4660;
        }
    }
    ctx->pc = 0x2E443Cu;
    // 0x2e443c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4440: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4440u;
    {
        const bool branch_taken_0x2e4440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e4440) {
            ctx->pc = 0x2E4450u;
            goto label_2e4450;
        }
    }
    ctx->pc = 0x2E4448u;
    // 0x2e4448: 0x1000025d  b           . + 4 + (0x25D << 2)
    ctx->pc = 0x2E4448u;
    {
        const bool branch_taken_0x2e4448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4448) {
            ctx->pc = 0x2E4DC0u;
            goto label_2e4dc0;
        }
    }
    ctx->pc = 0x2E4450u;
label_2e4450:
    // 0x2e4450: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2e4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e4454: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e4458: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e445c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2e445cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4460: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x2e4460u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e4464: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e4464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e4468: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e446c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e446cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e4470: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e4470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e4474: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2e4474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e4478: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e4478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e447c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2E447Cu;
    {
        const bool branch_taken_0x2e447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E447Cu;
        // 0x2e4480: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e447c) {
            ctx->pc = 0x2E4648u;
            goto label_2e4648;
        }
    }
    ctx->pc = 0x2E4484u;
    // 0x2e4484: 0x0  nop
    ctx->pc = 0x2e4484u;
    // NOP
label_2e4488:
    // 0x2e4488: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2e4488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2e448c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e4490: 0x8c530020  lw          $s3, 0x20($v0)
    ctx->pc = 0x2e4490u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e4494: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e4494u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4498: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2e4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e449c: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x2e449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e44a0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e44a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e44a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e44a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e44a8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e44ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e44acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e44b0: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x2e44b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e44b4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e44b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e44bc: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2E44BCu;
    SET_GPR_U32(ctx, 31, 0x2E44C4u);
    ctx->pc = 0x2E44C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44BCu;
    // 0x2e44c0: 0x24550040  addiu       $s5, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2E44BCu, 0x2E44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44C4u;
label_2e44c4:
    // 0x2e44c4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e44c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e44c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e44c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e44cc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E44CCu;
    SET_GPR_U32(ctx, 31, 0x2E44D4u);
    ctx->pc = 0x2E44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44CCu;
    // 0x2e44d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E44CCu, 0x2E44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44D4u;
label_2e44d4:
    // 0x2e44d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e44d8: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e44dc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E44DCu;
    SET_GPR_U32(ctx, 31, 0x2E44E4u);
    ctx->pc = 0x2E44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44DCu;
    // 0x2e44e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E44DCu, 0x2E44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44E4u;
label_2e44e4:
    // 0x2e44e4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2e44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e44e8: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e44ec: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2e44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e44f0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e44f4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e44f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2e44f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e44f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e44fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E44FCu;
    {
        const bool branch_taken_0x2e44fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44FCu;
        // 0x2e4500: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e44fc) {
            ctx->pc = 0x2E4520u;
            goto label_2e4520;
        }
    }
    ctx->pc = 0x2E4504u;
label_2e4504:
    // 0x2e4504: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e4504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e450c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e4510: 0x0  nop
    ctx->pc = 0x2e4510u;
    // NOP
    // 0x2e4514: 0x0  nop
    ctx->pc = 0x2e4514u;
    // NOP
    // 0x2e4518: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E4518u;
    {
        const bool branch_taken_0x2e4518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4518) {
            ctx->pc = 0x2E4504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4504;
        }
    }
    ctx->pc = 0x2E4520u;
label_2e4520:
    // 0x2e4520: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2e4520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4524: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2e4524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e4528: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2e4528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e452c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2e452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2e4530: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2e4530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4534: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2e4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2e4538: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2e4538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e453c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2e453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2e4540: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2e4540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e4544: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x2e4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e4548: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e4548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e454c: 0xc041442  jal         func_105108
    ctx->pc = 0x2E454Cu;
    SET_GPR_U32(ctx, 31, 0x2E4554u);
    ctx->pc = 0x2E4550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E454Cu;
    // 0x2e4550: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2E454Cu, 0x2E4554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4554u;
label_2e4554:
    // 0x2e4554: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e4558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e4558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e455c: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x2e455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e4560: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e4564: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2e4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e4568: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2e4568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2e456c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e456cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4574: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e4574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e4578: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e457c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2e4580: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2e4580u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4584: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4584u;
    SET_GPR_U32(ctx, 31, 0x2E458Cu);
    ctx->pc = 0x2E4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4584u;
    // 0x2e4588: 0x7c670000  sq          $a3, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4584u, 0x2E458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E458Cu;
label_2e458c:
    // 0x2e458c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e4590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4594: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4594u;
    SET_GPR_U32(ctx, 31, 0x2E459Cu);
    ctx->pc = 0x2E4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4594u;
    // 0x2e4598: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4594u, 0x2E459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E459Cu;
label_2e459c:
    // 0x2e459c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2e459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e45a0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e45a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e45a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e45a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45a8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E45A8u;
    SET_GPR_U32(ctx, 31, 0x2E45B0u);
    ctx->pc = 0x2E45ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45A8u;
    // 0x2e45ac: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E45A8u, 0x2E45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45B0u;
label_2e45b0:
    // 0x2e45b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2e45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2e45b4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e45b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e45b8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E45B8u;
    SET_GPR_U32(ctx, 31, 0x2E45C0u);
    ctx->pc = 0x2E45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45B8u;
    // 0x2e45bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E45B8u, 0x2E45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45C0u;
label_2e45c0:
    // 0x2e45c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e45c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e45c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45c8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E45C8u;
    SET_GPR_U32(ctx, 31, 0x2E45D0u);
    ctx->pc = 0x2E45CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45C8u;
    // 0x2e45cc: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E45C8u, 0x2E45D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45D0u;
label_2e45d0:
    // 0x2e45d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e45d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e45d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45d8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E45D8u;
    SET_GPR_U32(ctx, 31, 0x2E45E0u);
    ctx->pc = 0x2E45DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45D8u;
    // 0x2e45dc: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E45D8u, 0x2E45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45E0u;
label_2e45e0:
    // 0x2e45e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e45e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e45e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45e8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e45e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e45ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45f0: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E45F0u;
    SET_GPR_U32(ctx, 31, 0x2E45F8u);
    ctx->pc = 0x2E45F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45F0u;
    // 0x2e45f4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E45F0u, 0x2E45F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45F8u;
label_2e45f8:
    // 0x2e45f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e45f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45fc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2e45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e4600: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4600u;
    SET_GPR_U32(ctx, 31, 0x2E4608u);
    ctx->pc = 0x2E4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4600u;
    // 0x2e4604: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4600u, 0x2E4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4608u;
label_2e4608:
    // 0x2e4608: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4608u;
    SET_GPR_U32(ctx, 31, 0x2E4610u);
    ctx->pc = 0x2E460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4608u;
    // 0x2e460c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4608u, 0x2E4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4610u;
label_2e4610:
    // 0x2e4610: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e4610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4614: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2e4614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2e4618: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e461c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e461cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4620: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e4620u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e4624: 0x0  nop
    ctx->pc = 0x2e4624u;
    // NOP
    // 0x2e4628: 0x0  nop
    ctx->pc = 0x2e4628u;
    // NOP
    // 0x2e462c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E462Cu;
    SET_GPR_U32(ctx, 31, 0x2E4634u);
    ctx->pc = 0x2E4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E462Cu;
    // 0x2e4630: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E462Cu, 0x2E4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4634u;
label_2e4634:
    // 0x2e4634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e463c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E463Cu;
    SET_GPR_U32(ctx, 31, 0x2E4644u);
    ctx->pc = 0x2E4640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E463Cu;
    // 0x2e4640: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E463Cu, 0x2E4644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4644u;
label_2e4644:
    // 0x2e4644: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e4644u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2e4648:
    // 0x2e4648: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e464c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2e464cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4650: 0x1460ff8d  bnez        $v1, . + 4 + (-0x73 << 2)
    ctx->pc = 0x2E4650u;
    {
        const bool branch_taken_0x2e4650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4650) {
            ctx->pc = 0x2E4488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4488;
        }
    }
    ctx->pc = 0x2E4658u;
    // 0x2e4658: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2E4658u;
    {
        const bool branch_taken_0x2e4658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4658) {
            ctx->pc = 0x2E4DC0u;
            goto label_2e4dc0;
        }
    }
    ctx->pc = 0x2E4660u;
label_2e4660:
    // 0x2e4660: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2e4660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e4664: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e4664u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4668: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x2e4668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2e466c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e466cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4670: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2e4670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e4674: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2e4674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e4678: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e4678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e467c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e4680: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2e4680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2e4684: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e4684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e4688: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e4688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e468c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e4690: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e4690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e4694: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2e4694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e4698: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2e4698u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e469c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2E469Cu;
    {
        const bool branch_taken_0x2e469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E469Cu;
        // 0x2e46a0: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e469c) {
            ctx->pc = 0x2E4838u;
            goto label_2e4838;
        }
    }
    ctx->pc = 0x2E46A4u;
    // 0x2e46a4: 0x0  nop
    ctx->pc = 0x2e46a4u;
    // NOP
label_2e46a8:
    // 0x2e46a8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2e46ac: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e46b0: 0x8c730020  lw          $s3, 0x20($v1)
    ctx->pc = 0x2e46b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e46b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e46b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e46b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e46bc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2e46bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e46c0: 0x0  nop
    ctx->pc = 0x2e46c0u;
    // NOP
    // 0x2e46c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e46c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e46c8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e46cc: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x2e46ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e46d0: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x2e46d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e46d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2e46d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e46d8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x2e46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2e46dc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e46e0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e46e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e46e8: 0x24700040  addiu       $s0, $v1, 0x40
    ctx->pc = 0x2e46e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e46ec: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2E46ECu;
    SET_GPR_U32(ctx, 31, 0x2E46F4u);
    ctx->pc = 0x2E46F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46ECu;
    // 0x2e46f0: 0x24550040  addiu       $s5, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2E46ECu, 0x2E46F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46F4u;
label_2e46f4:
    // 0x2e46f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e46f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e46f8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e46f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e46fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E46FCu;
    SET_GPR_U32(ctx, 31, 0x2E4704u);
    ctx->pc = 0x2E4700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E46FCu;
    // 0x2e4700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E46FCu, 0x2E4704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4704u;
label_2e4704:
    // 0x2e4704: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e4708: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2e4708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e470c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E470Cu;
    SET_GPR_U32(ctx, 31, 0x2E4714u);
    ctx->pc = 0x2E4710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E470Cu;
    // 0x2e4710: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E470Cu, 0x2E4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4714u;
label_2e4714:
    // 0x2e4714: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2e4714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4718: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e4718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e471c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2e471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4720: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e4720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4724: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e4724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4728: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e4728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2e472c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e472cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4730: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4730u;
    SET_GPR_U32(ctx, 31, 0x2E4738u);
    ctx->pc = 0x2E4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4730u;
    // 0x2e4734: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4730u, 0x2E4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4738u;
label_2e4738:
    // 0x2e4738: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4738u;
    SET_GPR_U32(ctx, 31, 0x2E4740u);
    ctx->pc = 0x2E473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4738u;
    // 0x2e473c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4738u, 0x2E4740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4740u;
label_2e4740:
    // 0x2e4740: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e4740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4744: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4744u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4748: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E4748u;
    {
        const bool branch_taken_0x2e4748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4748) {
            ctx->pc = 0x2E4788u;
            goto label_2e4788;
        }
    }
    ctx->pc = 0x2E4750u;
    // 0x2e4750: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x2e4750u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4754: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e4754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e4758: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e475c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e475cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4760: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2e4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4764: 0x0  nop
    ctx->pc = 0x2e4764u;
    // NOP
    // 0x2e4768: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e4768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e476c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E476Cu;
    SET_GPR_U32(ctx, 31, 0x2E4774u);
    ctx->pc = 0x2E4770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E476Cu;
    // 0x2e4770: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E476Cu, 0x2E4774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4774u;
label_2e4774:
    // 0x2e4774: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e4774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e4778: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2e4778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e477c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E477Cu;
    SET_GPR_U32(ctx, 31, 0x2E4784u);
    ctx->pc = 0x2E4780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E477Cu;
    // 0x2e4780: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E477Cu, 0x2E4784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4784u;
label_2e4784:
    // 0x2e4784: 0x0  nop
    ctx->pc = 0x2e4784u;
    // NOP
label_2e4788:
    // 0x2e4788: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2e4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e478c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e4790: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4790u;
    SET_GPR_U32(ctx, 31, 0x2E4798u);
    ctx->pc = 0x2E4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4790u;
    // 0x2e4794: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4790u, 0x2E4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4798u;
label_2e4798:
    // 0x2e4798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e479c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47a0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E47A0u;
    SET_GPR_U32(ctx, 31, 0x2E47A8u);
    ctx->pc = 0x2E47A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47A0u;
    // 0x2e47a4: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E47A0u, 0x2E47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47A8u;
label_2e47a8:
    // 0x2e47a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e47a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e47acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e47b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e47b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47b8: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E47B8u;
    SET_GPR_U32(ctx, 31, 0x2E47C0u);
    ctx->pc = 0x2E47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47B8u;
    // 0x2e47bc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E47B8u, 0x2E47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47C0u;
label_2e47c0:
    // 0x2e47c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e47c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47c4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e47c8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E47C8u;
    SET_GPR_U32(ctx, 31, 0x2E47D0u);
    ctx->pc = 0x2E47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47C8u;
    // 0x2e47cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E47C8u, 0x2E47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D0u;
label_2e47d0:
    // 0x2e47d0: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E47D0u;
    SET_GPR_U32(ctx, 31, 0x2E47D8u);
    ctx->pc = 0x2E47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E47D0u;
    // 0x2e47d4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E47D0u, 0x2E47D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47D8u;
label_2e47d8:
    // 0x2e47d8: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x2e47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e47dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e47dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e47e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e47e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e47e4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e47e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e47e8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e47e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e47ec: 0x0  nop
    ctx->pc = 0x2e47ecu;
    // NOP
    // 0x2e47f0: 0x0  nop
    ctx->pc = 0x2e47f0u;
    // NOP
    // 0x2e47f4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E47F4u;
    SET_GPR_U32(ctx, 31, 0x2E47FCu);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E47F4u, 0x2E47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E47FCu;
label_2e47fc:
    // 0x2e47fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e47fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4804: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4804u;
    SET_GPR_U32(ctx, 31, 0x2E480Cu);
    ctx->pc = 0x2E4808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4804u;
    // 0x2e4808: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4804u, 0x2E480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E480Cu;
label_2e480c:
    // 0x2e480c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2e480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4810: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e4810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e4814: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4818: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4818u;
    SET_GPR_U32(ctx, 31, 0x2E4820u);
    ctx->pc = 0x2E481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4818u;
    // 0x2e481c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4818u, 0x2E4820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4820u;
label_2e4820:
    // 0x2e4820: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e4820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e4824: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2e4824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e4828: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4828u;
    SET_GPR_U32(ctx, 31, 0x2E4830u);
    ctx->pc = 0x2E482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4828u;
    // 0x2e482c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4828u, 0x2E4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4830u;
label_2e4830:
    // 0x2e4830: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e4830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e4834: 0x0  nop
    ctx->pc = 0x2e4834u;
    // NOP
label_2e4838:
    // 0x2e4838: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e483c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2e483cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4840: 0x1460ff99  bnez        $v1, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2E4840u;
    {
        const bool branch_taken_0x2e4840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4840) {
            ctx->pc = 0x2E46A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e46a8;
        }
    }
    ctx->pc = 0x2E4848u;
    // 0x2e4848: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x2E4848u;
    {
        const bool branch_taken_0x2e4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4848) {
            ctx->pc = 0x2E4DC0u;
            goto label_2e4dc0;
        }
    }
    ctx->pc = 0x2E4850u;
label_2e4850:
    // 0x2e4850: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E4850u;
    {
        const bool branch_taken_0x2e4850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4850u;
        // 0x2e4854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4850) {
            ctx->pc = 0x2E4890u;
            goto label_2e4890;
        }
    }
    ctx->pc = 0x2E4858u;
label_2e4858:
    // 0x2e4858: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e4858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e485c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2e485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e4860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4864: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2e4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e4868: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2e4868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e486c: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4870: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e4870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e4874: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e4874u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e4878: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e4878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e487c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e487cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e4880: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e4884: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2e4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e4888: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2e4888u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e488c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2e488cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2e4890:
    // 0x2e4890: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4894: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2e4894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4898: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E4898u;
    {
        const bool branch_taken_0x2e4898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4898) {
            ctx->pc = 0x2E4858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4858;
        }
    }
    ctx->pc = 0x2E48A0u;
    // 0x2e48a0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2E48A0u;
    {
        const bool branch_taken_0x2e48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E48A0u;
        // 0x2e48a4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e48a0) {
            ctx->pc = 0x2E4A80u;
            goto label_2e4a80;
        }
    }
    ctx->pc = 0x2E48A8u;
label_2e48a8:
    // 0x2e48a8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e48ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e48acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e48b0: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x2e48b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e48b4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e48b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e48b8: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e48b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e48bc: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x2e48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e48c0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e48c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e48c8: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2E48C8u;
    SET_GPR_U32(ctx, 31, 0x2E48D0u);
    ctx->pc = 0x2E48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48C8u;
    // 0x2e48cc: 0x24530040  addiu       $s3, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2E48C8u, 0x2E48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48D0u;
label_2e48d0:
    // 0x2e48d0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e48d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e48d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e48d8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E48D8u;
    SET_GPR_U32(ctx, 31, 0x2E48E0u);
    ctx->pc = 0x2E48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48D8u;
    // 0x2e48dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E48D8u, 0x2E48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48E0u;
label_2e48e0:
    // 0x2e48e0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e48e4: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2e48e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e48e8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E48E8u;
    SET_GPR_U32(ctx, 31, 0x2E48F0u);
    ctx->pc = 0x2E48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48E8u;
    // 0x2e48ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E48E8u, 0x2E48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48F0u;
label_2e48f0:
    // 0x2e48f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2e48f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e48f4: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2e48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e48f8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e48f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2e48fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e48fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4900: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E4900u;
    {
        const bool branch_taken_0x2e4900 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4900u;
        // 0x2e4904: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4900) {
            ctx->pc = 0x2E4998u;
            goto label_2e4998;
        }
    }
    ctx->pc = 0x2E4908u;
    // 0x2e4908: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e4908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e490c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4910: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4914: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4918: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e491c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E491Cu;
    SET_GPR_U32(ctx, 31, 0x2E4924u);
    ctx->pc = 0x2E4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E491Cu;
    // 0x2e4920: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E491Cu, 0x2E4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4924u;
label_2e4924:
    // 0x2e4924: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4924u;
    SET_GPR_U32(ctx, 31, 0x2E492Cu);
    ctx->pc = 0x2E4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4924u;
    // 0x2e4928: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4924u, 0x2E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E492Cu;
label_2e492c:
    // 0x2e492c: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4930: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4934: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x2E4934u;
    {
        const bool branch_taken_0x2e4934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4934) {
            ctx->pc = 0x2E4998u;
            goto label_2e4998;
        }
    }
    ctx->pc = 0x2E493Cu;
    // 0x2e493c: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x2e493cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4940: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e4944: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e4944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e4948: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x2e4948u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e494c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4950: 0x0  nop
    ctx->pc = 0x2e4950u;
    // NOP
    // 0x2e4954: 0x0  nop
    ctx->pc = 0x2e4954u;
    // NOP
    // 0x2e4958: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4958u;
    SET_GPR_U32(ctx, 31, 0x2E4960u);
    ctx->pc = 0x2E495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4958u;
    // 0x2e495c: 0x4601ab02  mul.s       $f12, $f21, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4958u, 0x2E4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4960u;
label_2e4960:
    // 0x2e4960: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4964: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2e4964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e4968: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4968u;
    SET_GPR_U32(ctx, 31, 0x2E4970u);
    ctx->pc = 0x2E496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4968u;
    // 0x2e496c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4968u, 0x2E4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4970u;
label_2e4970:
    // 0x2e4970: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4974: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e4974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e4978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e497c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2e497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e4980: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4980u;
    SET_GPR_U32(ctx, 31, 0x2E4988u);
    ctx->pc = 0x2E4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4980u;
    // 0x2e4984: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4980u, 0x2E4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4988u;
label_2e4988:
    // 0x2e4988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e498c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e498cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4990: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4990u;
    SET_GPR_U32(ctx, 31, 0x2E4998u);
    ctx->pc = 0x2E4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4990u;
    // 0x2e4994: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4990u, 0x2E4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4998u;
label_2e4998:
    // 0x2e4998: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e4998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e499c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e49a0: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e49a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e49a4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E49A4u;
    {
        const bool branch_taken_0x2e49a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49a4) {
            ctx->pc = 0x2E4A40u;
            goto label_2e4a40;
        }
    }
    ctx->pc = 0x2E49ACu;
    // 0x2e49ac: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2e49acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e49b0: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e49b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e49b8: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e49b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e49bc: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e49bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e49c0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E49C0u;
    SET_GPR_U32(ctx, 31, 0x2E49C8u);
    ctx->pc = 0x2E49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49C0u;
    // 0x2e49c4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E49C0u, 0x2E49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49C8u;
label_2e49c8:
    // 0x2e49c8: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E49C8u;
    SET_GPR_U32(ctx, 31, 0x2E49D0u);
    ctx->pc = 0x2E49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49C8u;
    // 0x2e49cc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E49C8u, 0x2E49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49D0u;
label_2e49d0:
    // 0x2e49d0: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e49d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e49d8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2E49D8u;
    {
        const bool branch_taken_0x2e49d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e49d8) {
            ctx->pc = 0x2E4A40u;
            goto label_2e4a40;
        }
    }
    ctx->pc = 0x2E49E0u;
    // 0x2e49e0: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x2e49e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e49e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e49e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e49e8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e49e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e49ec: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x2e49ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e49f0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e49f4: 0x0  nop
    ctx->pc = 0x2e49f4u;
    // NOP
    // 0x2e49f8: 0x0  nop
    ctx->pc = 0x2e49f8u;
    // NOP
    // 0x2e49fc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E49FCu;
    SET_GPR_U32(ctx, 31, 0x2E4A04u);
    ctx->pc = 0x2E4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E49FCu;
    // 0x2e4a00: 0x4601ab02  mul.s       $f12, $f21, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E49FCu, 0x2E4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A04u;
label_2e4a04:
    // 0x2e4a04: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4a08: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2e4a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e4a0c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E4A14u);
    ctx->pc = 0x2E4A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A0Cu;
    // 0x2e4a10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4A0Cu, 0x2E4A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A14u;
label_2e4a14:
    // 0x2e4a14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4a18: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a20: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e4a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e4a24: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4A24u;
    SET_GPR_U32(ctx, 31, 0x2E4A2Cu);
    ctx->pc = 0x2E4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A24u;
    // 0x2e4a28: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4A24u, 0x2E4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A2Cu;
label_2e4a2c:
    // 0x2e4a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a34: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4A34u;
    SET_GPR_U32(ctx, 31, 0x2E4A3Cu);
    ctx->pc = 0x2E4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A34u;
    // 0x2e4a38: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4A34u, 0x2E4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A3Cu;
label_2e4a3c:
    // 0x2e4a3c: 0x0  nop
    ctx->pc = 0x2e4a3cu;
    // NOP
label_2e4a40:
    // 0x2e4a40: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e4a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e4a44: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x2e4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4a48: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4A48u;
    SET_GPR_U32(ctx, 31, 0x2E4A50u);
    ctx->pc = 0x2E4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A48u;
    // 0x2e4a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4A48u, 0x2E4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A50u;
label_2e4a50:
    // 0x2e4a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a58: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4A58u;
    SET_GPR_U32(ctx, 31, 0x2E4A60u);
    ctx->pc = 0x2E4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A58u;
    // 0x2e4a5c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4A58u, 0x2E4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A60u;
label_2e4a60:
    // 0x2e4a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a64: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e4a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a68: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e4a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e4a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a70: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E4A70u;
    SET_GPR_U32(ctx, 31, 0x2E4A78u);
    ctx->pc = 0x2E4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A70u;
    // 0x2e4a74: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E4A70u, 0x2E4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A78u;
label_2e4a78:
    // 0x2e4a78: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e4a78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4a7c: 0x0  nop
    ctx->pc = 0x2e4a7cu;
    // NOP
label_2e4a80:
    // 0x2e4a80: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4a84: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e4a84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4a88: 0x1460ff87  bnez        $v1, . + 4 + (-0x79 << 2)
    ctx->pc = 0x2E4A88u;
    {
        const bool branch_taken_0x2e4a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a88) {
            ctx->pc = 0x2E48A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e48a8;
        }
    }
    ctx->pc = 0x2E4A90u;
    // 0x2e4a90: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2E4A90u;
    {
        const bool branch_taken_0x2e4a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4a90) {
            ctx->pc = 0x2E4DC0u;
            goto label_2e4dc0;
        }
    }
    ctx->pc = 0x2E4A98u;
label_2e4a98:
    // 0x2e4a98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E4A98u;
    {
        const bool branch_taken_0x2e4a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A98u;
        // 0x2e4a9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4a98) {
            ctx->pc = 0x2E4AD8u;
            goto label_2e4ad8;
        }
    }
    ctx->pc = 0x2E4AA0u;
label_2e4aa0:
    // 0x2e4aa0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2e4aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e4aa4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2e4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e4aa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4aac: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x2e4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e4ab0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2e4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2e4ab4: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4ab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e4ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e4abc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e4abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e4ac0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e4ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e4ac4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e4ac8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e4acc: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2e4accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e4ad0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x2e4ad0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4ad4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2e4ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_2e4ad8:
    // 0x2e4ad8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4adc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2e4adcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4ae0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E4AE0u;
    {
        const bool branch_taken_0x2e4ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ae0) {
            ctx->pc = 0x2E4AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4aa0;
        }
    }
    ctx->pc = 0x2E4AE8u;
    // 0x2e4ae8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2E4AE8u;
    {
        const bool branch_taken_0x2e4ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4AE8u;
        // 0x2e4aec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ae8) {
            ctx->pc = 0x2E4DB0u;
            goto label_2e4db0;
        }
    }
    ctx->pc = 0x2E4AF0u;
label_2e4af0:
    // 0x2e4af0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e4af4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e4af8: 0x8c540020  lw          $s4, 0x20($v0)
    ctx->pc = 0x2e4af8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2e4afc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e4afcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4b00: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2e4b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e4b04: 0xc68c0008  lwc1        $f12, 0x8($s4)
    ctx->pc = 0x2e4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4b08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e4b0c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2e4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e4b10: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x2E4B10u;
    SET_GPR_U32(ctx, 31, 0x2E4B18u);
    ctx->pc = 0x2E4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B10u;
    // 0x2e4b14: 0x24530040  addiu       $s3, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x2E4B10u, 0x2E4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B18u;
label_2e4b18:
    // 0x2e4b18: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4b1c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e4b1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4b20: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4B20u;
    SET_GPR_U32(ctx, 31, 0x2E4B28u);
    ctx->pc = 0x2E4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B20u;
    // 0x2e4b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4B20u, 0x2E4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B28u;
label_2e4b28:
    // 0x2e4b28: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4b2c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x2e4b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2e4b30: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4B30u;
    SET_GPR_U32(ctx, 31, 0x2E4B38u);
    ctx->pc = 0x2E4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B30u;
    // 0x2e4b34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4B30u, 0x2E4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2e4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4b3c: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x2e4b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4b40: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2e4b40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2e4b44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e4b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4b48: 0x12a00019  beqz        $s5, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4B48u;
    {
        const bool branch_taken_0x2e4b48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B48u;
        // 0x2e4b4c: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b48) {
            ctx->pc = 0x2E4BB0u;
            goto label_2e4bb0;
        }
    }
    ctx->pc = 0x2E4B50u;
    // 0x2e4b50: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e4b54: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4b58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4b5c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4b60: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4b64: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4B64u;
    SET_GPR_U32(ctx, 31, 0x2E4B6Cu);
    ctx->pc = 0x2E4B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B64u;
    // 0x2e4b68: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4B64u, 0x2E4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B6Cu;
label_2e4b6c:
    // 0x2e4b6c: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4B6Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B74u);
    ctx->pc = 0x2E4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B6Cu;
    // 0x2e4b70: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4B6Cu, 0x2E4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B74u;
label_2e4b74:
    // 0x2e4b74: 0xc6820010  lwc1        $f2, 0x10($s4)
    ctx->pc = 0x2e4b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4b78: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4b7c: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e4b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4b80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4b84: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2e4b84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e4b88: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e4b88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4b8c: 0x0  nop
    ctx->pc = 0x2e4b8cu;
    // NOP
    // 0x2e4b90: 0x0  nop
    ctx->pc = 0x2e4b90u;
    // NOP
    // 0x2e4b94: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4B94u;
    SET_GPR_U32(ctx, 31, 0x2E4B9Cu);
    ctx->pc = 0x2E4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B94u;
    // 0x2e4b98: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4B94u, 0x2E4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B9Cu;
label_2e4b9c:
    // 0x2e4b9c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4ba0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4ba4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4BA4u;
    SET_GPR_U32(ctx, 31, 0x2E4BACu);
    ctx->pc = 0x2E4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BA4u;
    // 0x2e4ba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4BA4u, 0x2E4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BACu;
label_2e4bac:
    // 0x2e4bac: 0x0  nop
    ctx->pc = 0x2e4bacu;
    // NOP
label_2e4bb0:
    // 0x2e4bb0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e4bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4bb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4bb8: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e4bb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e4bbc: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E4BBCu;
    {
        const bool branch_taken_0x2e4bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4bbc) {
            ctx->pc = 0x2E4C30u;
            goto label_2e4c30;
        }
    }
    ctx->pc = 0x2E4BC4u;
    // 0x2e4bc4: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2e4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4bc8: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4bcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4bd0: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4bd4: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4bd8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4BD8u;
    SET_GPR_U32(ctx, 31, 0x2E4BE0u);
    ctx->pc = 0x2E4BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BD8u;
    // 0x2e4bdc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4BD8u, 0x2E4BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BE0u;
label_2e4be0:
    // 0x2e4be0: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4BE0u;
    SET_GPR_U32(ctx, 31, 0x2E4BE8u);
    ctx->pc = 0x2E4BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BE0u;
    // 0x2e4be4: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4BE0u, 0x2E4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BE8u;
label_2e4be8:
    // 0x2e4be8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e4bec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4bf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2e4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e4bf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4bf8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2e4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2e4bfc: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x2e4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4c00: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2e4c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e4c04: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x2e4c04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2e4c08: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2e4c08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e4c0c: 0x0  nop
    ctx->pc = 0x2e4c0cu;
    // NOP
    // 0x2e4c10: 0x0  nop
    ctx->pc = 0x2e4c10u;
    // NOP
    // 0x2e4c14: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4C14u;
    SET_GPR_U32(ctx, 31, 0x2E4C1Cu);
    ctx->pc = 0x2E4C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C14u;
    // 0x2e4c18: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4C14u, 0x2E4C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C1Cu;
label_2e4c1c:
    // 0x2e4c1c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4c20: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4c24: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4C24u;
    SET_GPR_U32(ctx, 31, 0x2E4C2Cu);
    ctx->pc = 0x2E4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C24u;
    // 0x2e4c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4C24u, 0x2E4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C2Cu;
label_2e4c2c:
    // 0x2e4c2c: 0x0  nop
    ctx->pc = 0x2e4c2cu;
    // NOP
label_2e4c30:
    // 0x2e4c30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e4c34: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x2e4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4c38: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4C38u;
    SET_GPR_U32(ctx, 31, 0x2E4C40u);
    ctx->pc = 0x2E4C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C38u;
    // 0x2e4c3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4C38u, 0x2E4C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C40u;
label_2e4c40:
    // 0x2e4c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c48: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4C48u;
    SET_GPR_U32(ctx, 31, 0x2E4C50u);
    ctx->pc = 0x2E4C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C48u;
    // 0x2e4c4c: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4C48u, 0x2E4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C50u;
label_2e4c50:
    // 0x2e4c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e4c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e4c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e4c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c60: 0xc0b8d18  jal         func_2E3460
    ctx->pc = 0x2E4C60u;
    SET_GPR_U32(ctx, 31, 0x2E4C68u);
    ctx->pc = 0x2E4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C60u;
    // 0x2e4c64: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3460u, 0x2E4C60u, 0x2E4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C68u;
label_2e4c68:
    // 0x2e4c68: 0x1aa0001f  blez        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E4C68u;
    {
        const bool branch_taken_0x2e4c68 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x2e4c68) {
            ctx->pc = 0x2E4CE8u;
            goto label_2e4ce8;
        }
    }
    ctx->pc = 0x2E4C70u;
    // 0x2e4c70: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2e4c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4c74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e4c78: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x2e4c78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e4c7c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E4C7Cu;
    {
        const bool branch_taken_0x2e4c7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c7c) {
            ctx->pc = 0x2E4CE8u;
            goto label_2e4ce8;
        }
    }
    ctx->pc = 0x2E4C84u;
    // 0x2e4c84: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e4c88: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4c8c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4c90: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4c94: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4c98: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4C98u;
    SET_GPR_U32(ctx, 31, 0x2E4CA0u);
    ctx->pc = 0x2E4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C98u;
    // 0x2e4c9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4C98u, 0x2E4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CA0u;
label_2e4ca0:
    // 0x2e4ca0: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2e4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4ca4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4ca8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4cac: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4cb0: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4cb4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4CB4u;
    SET_GPR_U32(ctx, 31, 0x2E4CBCu);
    ctx->pc = 0x2E4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CB4u;
    // 0x2e4cb8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4CB4u, 0x2E4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CBCu;
label_2e4cbc:
    // 0x2e4cbc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4cc0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2e4cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e4cc4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4CC4u;
    SET_GPR_U32(ctx, 31, 0x2E4CCCu);
    ctx->pc = 0x2E4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CC4u;
    // 0x2e4cc8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4CC4u, 0x2E4CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CCCu;
label_2e4ccc:
    // 0x2e4ccc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4cd0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4cd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4cd8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4CD8u;
    SET_GPR_U32(ctx, 31, 0x2E4CE0u);
    ctx->pc = 0x2E4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CD8u;
    // 0x2e4cdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4CD8u, 0x2E4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4CE0u;
label_2e4ce0:
    // 0x2e4ce0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E4CE0u;
    {
        const bool branch_taken_0x2e4ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ce0) {
            ctx->pc = 0x2E4D38u;
            goto label_2e4d38;
        }
    }
    ctx->pc = 0x2E4CE8u;
label_2e4ce8:
    // 0x2e4ce8: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4CE8u;
    {
        const bool branch_taken_0x2e4ce8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4ce8) {
            ctx->pc = 0x2E4D18u;
            goto label_2e4d18;
        }
    }
    ctx->pc = 0x2E4CF0u;
    // 0x2e4cf0: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e4cf4: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4cf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e4cfc: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e4cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e4d00: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4d04: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4D04u;
    SET_GPR_U32(ctx, 31, 0x2E4D0Cu);
    ctx->pc = 0x2E4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D04u;
    // 0x2e4d08: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4D04u, 0x2E4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D0Cu;
label_2e4d0c:
    // 0x2e4d0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E4D0Cu;
    {
        const bool branch_taken_0x2e4d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d0c) {
            ctx->pc = 0x2E4D38u;
            goto label_2e4d38;
        }
    }
    ctx->pc = 0x2E4D14u;
    // 0x2e4d14: 0x0  nop
    ctx->pc = 0x2e4d14u;
    // NOP
label_2e4d18:
    // 0x2e4d18: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4d1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e4d20: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4d24: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e4d28: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e4d2c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D34u);
    ctx->pc = 0x2E4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D2Cu;
    // 0x2e4d30: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4D2Cu, 0x2E4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D34u;
label_2e4d34:
    // 0x2e4d34: 0x0  nop
    ctx->pc = 0x2e4d34u;
    // NOP
label_2e4d38:
    // 0x2e4d38: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x2E4D38u;
    SET_GPR_U32(ctx, 31, 0x2E4D40u);
    ctx->pc = 0x2E4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D38u;
    // 0x2e4d3c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x2E4D38u, 0x2E4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D40u;
label_2e4d40:
    // 0x2e4d40: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x2e4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4d48: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2E4D48u;
    {
        const bool branch_taken_0x2e4d48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4d48) {
            ctx->pc = 0x2E4DA8u;
            goto label_2e4da8;
        }
    }
    ctx->pc = 0x2E4D50u;
    // 0x2e4d50: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2e4d50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e4d54: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4d58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d5c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e4d5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e4d60: 0x0  nop
    ctx->pc = 0x2e4d60u;
    // NOP
    // 0x2e4d64: 0x0  nop
    ctx->pc = 0x2e4d64u;
    // NOP
    // 0x2e4d68: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4D68u;
    SET_GPR_U32(ctx, 31, 0x2E4D70u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4D68u, 0x2E4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D70u;
label_2e4d70:
    // 0x2e4d70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d78: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4D78u;
    SET_GPR_U32(ctx, 31, 0x2E4D80u);
    ctx->pc = 0x2E4D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D78u;
    // 0x2e4d7c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4D78u, 0x2E4D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D80u;
label_2e4d80:
    // 0x2e4d80: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2e4d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4d84: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2e4d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4d88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d8c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D94u);
    ctx->pc = 0x2E4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D8Cu;
    // 0x2e4d90: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4D8Cu, 0x2E4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D94u;
label_2e4d94:
    // 0x2e4d94: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e4d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e4d98: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2e4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e4d9c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2E4DA4u);
    ctx->pc = 0x2E4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D9Cu;
    // 0x2e4da0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E4D9Cu, 0x2E4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DA4u;
label_2e4da4:
    // 0x2e4da4: 0x0  nop
    ctx->pc = 0x2e4da4u;
    // NOP
label_2e4da8:
    // 0x2e4da8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e4da8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e4dac: 0x0  nop
    ctx->pc = 0x2e4dacu;
    // NOP
label_2e4db0:
    // 0x2e4db0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x2e4db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2e4db4: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e4db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e4db8: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x2E4DB8u;
    {
        const bool branch_taken_0x2e4db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4db8) {
            ctx->pc = 0x2E4AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4af0;
        }
    }
    ctx->pc = 0x2E4DC0u;
label_2e4dc0:
    // 0x2e4dc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e4dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e4dc4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e4dc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4dc8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e4dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e4dcc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e4dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4dd0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4dd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e4dd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4dd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e4dd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4ddc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e4ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4de0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e4de0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4de4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e4de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4de8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4dec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DECu;
        // 0x2e4df0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4DF4u;
}
