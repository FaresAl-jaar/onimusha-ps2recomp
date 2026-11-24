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

// Function: sub_001474A0
// Address: 0x1474a0 - 0x147638
void sub_001474A0_0x1474a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001474A0_0x1474a0");
#endif

    switch (ctx->pc) {
        case 0x1474e0u: goto label_1474e0;
        case 0x147514u: goto label_147514;
        case 0x147530u: goto label_147530;
        case 0x147540u: goto label_147540;
        case 0x147568u: goto label_147568;
        case 0x147620u: goto label_147620;
        default: break;
    }

    ctx->pc = 0x1474a0u;

    // 0x1474a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1474a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1474a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1474a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1474a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1474ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1474b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1474b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1474b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1474b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1474b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1474b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1474bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1474c0: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x1474c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1474c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1474c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1474c8: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x1474C8u;
    {
        const bool branch_taken_0x1474c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1474c8) {
            ctx->pc = 0x147620u;
            goto label_147620;
        }
    }
    ctx->pc = 0x1474D0u;
    // 0x1474d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1474d4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1474d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1474d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1474D8u;
    SET_GPR_U32(ctx, 31, 0x1474E0u);
    ctx->pc = 0x1474DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1474D8u;
    // 0x1474dc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1474D8u, 0x1474E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1474E0u;
label_1474e0:
    // 0x1474e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1474e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474e4: 0x1220004e  beqz        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1474E4u;
    {
        const bool branch_taken_0x1474e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1474e4) {
            ctx->pc = 0x147620u;
            goto label_147620;
        }
    }
    ctx->pc = 0x1474ECu;
    // 0x1474ec: 0xaf918554  sw          $s1, -0x7AAC($gp)
    ctx->pc = 0x1474ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 17));
    // 0x1474f0: 0x8f828554  lw          $v0, -0x7AAC($gp)
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1474f4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1474f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1474f8: 0xaf828554  sw          $v0, -0x7AAC($gp)
    ctx->pc = 0x1474f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 2));
    // 0x1474fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147500: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x147500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x147504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147504u;
    {
        const bool branch_taken_0x147504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147504u;
        // 0x147508: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147504) {
            ctx->pc = 0x147518u;
            goto label_147518;
        }
    }
    ctx->pc = 0x14750Cu;
    // 0x14750c: 0xc052338  jal         func_148CE0
    ctx->pc = 0x14750Cu;
    SET_GPR_U32(ctx, 31, 0x147514u);
    ctx->pc = 0x147510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14750Cu;
    // 0x147510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148CE0u, 0x14750Cu, 0x147514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147514u;
label_147514:
    // 0x147514: 0x0  nop
    ctx->pc = 0x147514u;
    // NOP
label_147518:
    // 0x147518: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x147518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14751c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x14751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x147520: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147520u;
    {
        const bool branch_taken_0x147520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147520u;
        // 0x147524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147520) {
            ctx->pc = 0x147530u;
            goto label_147530;
        }
    }
    ctx->pc = 0x147528u;
    // 0x147528: 0xc051da8  jal         func_1476A0
    ctx->pc = 0x147528u;
    SET_GPR_U32(ctx, 31, 0x147530u);
    ctx->pc = 0x1476A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476A0u, 0x147528u, 0x147530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147530u;
label_147530:
    // 0x147530: 0x8f858554  lw          $a1, -0x7AAC($gp)
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x147534: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x147538: 0xc0ad158  jal         func_2B4560
    ctx->pc = 0x147538u;
    SET_GPR_U32(ctx, 31, 0x147540u);
    ctx->pc = 0x14753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147538u;
    // 0x14753c: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4560u, 0x147538u, 0x147540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147540u;
label_147540:
    // 0x147540: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147540u;
    {
        const bool branch_taken_0x147540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147540) {
            ctx->pc = 0x147550u;
            goto label_147550;
        }
    }
    ctx->pc = 0x147548u;
    // 0x147548: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x147548u;
    {
        const bool branch_taken_0x147548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147548u;
        // 0x14754c: 0xaf828554  sw          $v0, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147548) {
            ctx->pc = 0x147568u;
            goto label_147568;
        }
    }
    ctx->pc = 0x147550u;
label_147550:
    // 0x147550: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x147550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147554: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x147554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x147558: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147558u;
    {
        const bool branch_taken_0x147558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147558u;
        // 0x14755c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147558) {
            ctx->pc = 0x147568u;
            goto label_147568;
        }
    }
    ctx->pc = 0x147560u;
    // 0x147560: 0xc052150  jal         func_148540
    ctx->pc = 0x147560u;
    SET_GPR_U32(ctx, 31, 0x147568u);
    ctx->pc = 0x148540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148540u, 0x147560u, 0x147568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147568u;
label_147568:
    // 0x147568: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x147568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14756c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x14756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x147570: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x147570u;
    {
        const bool branch_taken_0x147570 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x147574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147570u;
        // 0x147574: 0x34018000  ori         $at, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147570) {
            ctx->pc = 0x147620u;
            goto label_147620;
        }
    }
    ctx->pc = 0x147578u;
    // 0x147578: 0x2211821  addu        $v1, $s1, $at
    ctx->pc = 0x147578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x14757c: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14757cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x147580: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x147580u;
    {
        const bool branch_taken_0x147580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x147584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147580u;
        // 0x147584: 0xd11823  subu        $v1, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147580) {
            ctx->pc = 0x147620u;
            goto label_147620;
        }
    }
    ctx->pc = 0x147588u;
    // 0x147588: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x147588u;
    {
        const bool branch_taken_0x147588 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x14758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147588u;
        // 0x14758c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147588) {
            ctx->pc = 0x147598u;
            goto label_147598;
        }
    }
    ctx->pc = 0x147590u;
    // 0x147590: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x147590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x147594: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_147598:
    // 0x147598: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14759c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x14759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1475a0: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x1475a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1475a4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1475a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1475a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1475a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1475ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1475acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1475b0: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1475b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1475b4: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x1475b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1475b8: 0xd11823  subu        $v1, $a2, $s1
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1475bc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1475bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1475c0: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1475c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1475c4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1475C4u;
    {
        const bool branch_taken_0x1475c4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1475C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1475C4u;
        // 0x1475c8: 0xae24000c  sw          $a0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475c4) {
            ctx->pc = 0x1475D4u;
            goto label_1475d4;
        }
    }
    ctx->pc = 0x1475CCu;
    // 0x1475cc: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1475d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1475d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1475d4:
    // 0x1475d4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1475d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1475d8: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1475dc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1475dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1475e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1475e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1475e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1475e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1475e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1475e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1475ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1475ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1475f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1475f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1475f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1475f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1475f8: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1475f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1475fc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1475fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x147600: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x147604: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x147604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x147608: 0xfe070008  sd          $a3, 0x8($s0)
    ctx->pc = 0x147608u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 7));
    // 0x14760c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x14760cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x147610: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x147610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x147614: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x147614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x147618: 0xc061c60  jal         func_187180
    ctx->pc = 0x147618u;
    SET_GPR_U32(ctx, 31, 0x147620u);
    ctx->pc = 0x14761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147618u;
    // 0x14761c: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x147618u, 0x147620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147620u;
label_147620:
    // 0x147620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x147620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14762c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14762cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147630: 0x3e00008  jr          $ra
    ctx->pc = 0x147630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147630u;
        // 0x147634: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147638u;
}
