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

// Function: sub_002AC430
// Address: 0x2ac430 - 0x2ac644
void sub_002AC430_0x2ac430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC430_0x2ac430");
#endif

    switch (ctx->pc) {
        case 0x2ac4d4u: goto label_2ac4d4;
        case 0x2ac4e4u: goto label_2ac4e4;
        case 0x2ac604u: goto label_2ac604;
        case 0x2ac618u: goto label_2ac618;
        default: break;
    }

    ctx->pc = 0x2ac430u;

    // 0x2ac430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac434: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2ac434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ac438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ac438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ac43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ac440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ac444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ac444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac448: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2ac448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac44c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2ac44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2ac450: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ac450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ac454: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2ac454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac458: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2ac458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2ac45c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ac45cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ac460: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2ac460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac464: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2ac464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2ac468: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ac468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ac46c: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2ac46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac470: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2ac470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2ac474: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ac478: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2ac478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ac47c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ac47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ac480: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ac480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ac484: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x2ac484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ac488: 0x10c80061  beq         $a2, $t0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2AC488u;
    {
        const bool branch_taken_0x2ac488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x2AC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC488u;
        // 0x2ac48c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac488) {
            ctx->pc = 0x2AC610u;
            goto label_2ac610;
        }
    }
    ctx->pc = 0x2AC490u;
    // 0x2ac490: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ac490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac494: 0x10c70048  beq         $a2, $a3, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AC494u;
    {
        const bool branch_taken_0x2ac494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2AC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC494u;
        // 0x2ac498: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac494) {
            ctx->pc = 0x2AC5B8u;
            goto label_2ac5b8;
        }
    }
    ctx->pc = 0x2AC49Cu;
    // 0x2ac49c: 0x10c30032  beq         $a2, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2AC49Cu;
    {
        const bool branch_taken_0x2ac49c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ac49c) {
            ctx->pc = 0x2AC568u;
            goto label_2ac568;
        }
    }
    ctx->pc = 0x2AC4A4u;
    // 0x2ac4a4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC4A4u;
    {
        const bool branch_taken_0x2ac4a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac4a4) {
            ctx->pc = 0x2AC4B8u;
            goto label_2ac4b8;
        }
    }
    ctx->pc = 0x2AC4ACu;
    // 0x2ac4ac: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2AC4ACu;
    {
        const bool branch_taken_0x2ac4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac4ac) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC4B4u;
    // 0x2ac4b4: 0x0  nop
    ctx->pc = 0x2ac4b4u;
    // NOP
label_2ac4b8:
    // 0x2ac4b8: 0x8e2508c8  lw          $a1, 0x8C8($s1)
    ctx->pc = 0x2ac4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2248)));
    // 0x2ac4bc: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC4BCu;
    {
        const bool branch_taken_0x2ac4bc = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2ac4bc) {
            ctx->pc = 0x2AC4D8u;
            goto label_2ac4d8;
        }
    }
    ctx->pc = 0x2AC4C4u;
    // 0x2ac4c4: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2ac4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac4c8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2ac4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2ac4cc: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x2AC4CCu;
    SET_GPR_U32(ctx, 31, 0x2AC4D4u);
    ctx->pc = 0x2AC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4CCu;
    // 0x2ac4d0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2AC4CCu, 0x2AC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4D4u;
label_2ac4d4:
    // 0x2ac4d4: 0xae2008c8  sw          $zero, 0x8C8($s1)
    ctx->pc = 0x2ac4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2248), GPR_U32(ctx, 0));
label_2ac4d8:
    // 0x2ac4d8: 0x26240890  addiu       $a0, $s1, 0x890
    ctx->pc = 0x2ac4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2ac4dc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2AC4DCu;
    SET_GPR_U32(ctx, 31, 0x2AC4E4u);
    ctx->pc = 0x2AC4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC4DCu;
    // 0x2ac4e0: 0x26250870  addiu       $a1, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2AC4DCu, 0x2AC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC4E4u;
label_2ac4e4:
    // 0x2ac4e4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2ac4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2ac4e8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x2ac4e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ac4ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac4ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2ac4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac4f8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2ac4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2ac4fc: 0x34670fdb  ori         $a3, $v1, 0xFDB
    ctx->pc = 0x2ac4fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2ac500: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2ac500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ac504: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ac504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac508: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2ac508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2ac50c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ac50cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ac510: 0x24636ff0  addiu       $v1, $v1, 0x6FF0
    ctx->pc = 0x2ac510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28656));
    // 0x2ac514: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2ac514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ac518: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ac518u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ac51c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ac51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac520: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2ac520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ac524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ac524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ac52c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2ac52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2ac530: 0x0  nop
    ctx->pc = 0x2ac530u;
    // NOP
    // 0x2ac534: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x2ac534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2ac538: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2ac538u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2ac53c: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x2ac53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x2ac540: 0xa62700c2  sh          $a3, 0xC2($s1)
    ctx->pc = 0x2ac540u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ac544: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ac544u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ac548: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ac548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac54c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ac54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac550: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ac550u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ac554: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2ac554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ac558: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2ac558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2ac55c: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x2ac55cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ac560: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2AC560u;
    {
        const bool branch_taken_0x2ac560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC560u;
        // 0x2ac564: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac560) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC568u;
label_2ac568:
    // 0x2ac568: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ac568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ac56c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2AC56Cu;
    {
        const bool branch_taken_0x2ac56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC56Cu;
        // 0x2ac570: 0x320600ff  andi        $a2, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac56c) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC574u;
    // 0x2ac574: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2ac574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2ac578: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2ac578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2ac57c: 0x24a56ff1  addiu       $a1, $a1, 0x6FF1
    ctx->pc = 0x2ac57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28657));
    // 0x2ac580: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2ac580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ac584: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ac584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac588: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2ac588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2ac58c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac590: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x2ac590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ac594: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ac594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ac598: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ac598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac59c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ac59cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac5a0: 0xa62507f2  sh          $a1, 0x7F2($s1)
    ctx->pc = 0x2ac5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ac5a4: 0xa22407f5  sb          $a0, 0x7F5($s1)
    ctx->pc = 0x2ac5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ac5a8: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ac5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2ac5ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AC5ACu;
    {
        const bool branch_taken_0x2ac5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5ACu;
        // 0x2ac5b0: 0xa2270821  sb          $a3, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5ac) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC5B4u;
    // 0x2ac5b4: 0x0  nop
    ctx->pc = 0x2ac5b4u;
    // NOP
label_2ac5b8:
    // 0x2ac5b8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ac5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ac5bc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AC5BCu;
    {
        const bool branch_taken_0x2ac5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5BCu;
        // 0x2ac5c0: 0x320700ff  andi        $a3, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac5bc) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC5C4u;
    // 0x2ac5c4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2ac5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2ac5c8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2ac5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2ac5cc: 0x24c66ff2  addiu       $a2, $a2, 0x6FF2
    ctx->pc = 0x2ac5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28658));
    // 0x2ac5d0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2ac5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ac5d4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2ac5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac5d8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2ac5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2ac5dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ac5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ac5e0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ac5e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ac5e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2ac5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2ac5e8: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ac5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac5ec: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2ac5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ac5f0: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2ac5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ac5f4: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x2ac5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ac5f8: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x2ac5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x2ac5fc: 0xc0ab05c  jal         func_2AC170
    ctx->pc = 0x2AC5FCu;
    SET_GPR_U32(ctx, 31, 0x2AC604u);
    ctx->pc = 0x2AC600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC5FCu;
    // 0x2ac600: 0xa2280821  sb          $t0, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC170u, 0x2AC5FCu, 0x2AC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC604u;
label_2ac604:
    // 0x2ac604: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AC604u;
    {
        const bool branch_taken_0x2ac604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac604) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC60Cu;
    // 0x2ac60c: 0x0  nop
    ctx->pc = 0x2ac60cu;
    // NOP
label_2ac610:
    // 0x2ac610: 0xc0a6c74  jal         func_29B1D0
    ctx->pc = 0x2AC610u;
    SET_GPR_U32(ctx, 31, 0x2AC618u);
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x2AC610u, 0x2AC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC618u;
label_2ac618:
    // 0x2ac618: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2ac618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2ac61c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC61Cu;
    {
        const bool branch_taken_0x2ac61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC61Cu;
        // 0x2ac620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac61c) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC624u;
    // 0x2ac624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AC624u;
    {
        const bool branch_taken_0x2ac624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC624u;
        // 0x2ac628: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac624) {
            ctx->pc = 0x2AC630u;
            goto label_2ac630;
        }
    }
    ctx->pc = 0x2AC62Cu;
    // 0x2ac62c: 0x0  nop
    ctx->pc = 0x2ac62cu;
    // NOP
label_2ac630:
    // 0x2ac630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ac630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ac638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac63c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC63Cu;
        // 0x2ac640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC644u;
}
