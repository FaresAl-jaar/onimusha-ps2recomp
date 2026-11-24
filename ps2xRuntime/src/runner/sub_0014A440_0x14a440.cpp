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

// Function: sub_0014A440
// Address: 0x14a440 - 0x14a5bc
void sub_0014A440_0x14a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A440_0x14a440");
#endif

    switch (ctx->pc) {
        case 0x14a4a4u: goto label_14a4a4;
        case 0x14a4e8u: goto label_14a4e8;
        case 0x14a510u: goto label_14a510;
        default: break;
    }

    ctx->pc = 0x14a440u;

    // 0x14a440: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a444: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a448: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a44c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a450: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a458: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a460: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a468: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a46c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a470: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a474: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A474u;
    {
        const bool branch_taken_0x14a474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A474u;
        // 0x14a478: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a474) {
            ctx->pc = 0x14A500u;
            goto label_14a500;
        }
    }
    ctx->pc = 0x14A47Cu;
    // 0x14a47c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a480: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A480u;
    {
        const bool branch_taken_0x14a480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a480) {
            ctx->pc = 0x14A4D8u;
            goto label_14a4d8;
        }
    }
    ctx->pc = 0x14A488u;
    // 0x14a488: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A488u;
    {
        const bool branch_taken_0x14a488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a488) {
            ctx->pc = 0x14A498u;
            goto label_14a498;
        }
    }
    ctx->pc = 0x14A490u;
    // 0x14a490: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x14A490u;
    {
        const bool branch_taken_0x14a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a490) {
            ctx->pc = 0x14A5A0u;
            goto label_14a5a0;
        }
    }
    ctx->pc = 0x14A498u;
label_14a498:
    // 0x14a498: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a49c: 0xc048566  jal         func_121598
    ctx->pc = 0x14A49Cu;
    SET_GPR_U32(ctx, 31, 0x14A4A4u);
    ctx->pc = 0x14A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A49Cu;
    // 0x14a4a0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A49Cu, 0x14A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4A4u;
label_14a4a4:
    // 0x14a4a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A4A4u;
    {
        const bool branch_taken_0x14a4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4a4) {
            ctx->pc = 0x14A4B8u;
            goto label_14a4b8;
        }
    }
    ctx->pc = 0x14A4ACu;
    // 0x14a4ac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14A4ACu;
    {
        const bool branch_taken_0x14a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4ACu;
        // 0x14a4b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4ac) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A4B4u;
    // 0x14a4b4: 0x0  nop
    ctx->pc = 0x14a4b4u;
    // NOP
label_14a4b8:
    // 0x14a4b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a4c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a4c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a4c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a4cc: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x14a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a4d0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a4d4: 0x0  nop
    ctx->pc = 0x14a4d4u;
    // NOP
label_14a4d8:
    // 0x14a4d8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x14a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14a4dc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x14a4e0: 0xc04845e  jal         func_121178
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A4E0u;
    // 0x14a4e4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121178u, 0x14A4E0u, 0x14A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14A4E8u;
    {
        const bool branch_taken_0x14a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4e8) {
            ctx->pc = 0x14A5A0u;
            goto label_14a5a0;
        }
    }
    ctx->pc = 0x14A4F0u;
    // 0x14a4f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a4f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a4f8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14A4F8u;
    {
        const bool branch_taken_0x14a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A4F8u;
        // 0x14a4fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a4f8) {
            ctx->pc = 0x14A5A0u;
            goto label_14a5a0;
        }
    }
    ctx->pc = 0x14A500u;
label_14a500:
    // 0x14a500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a504: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a508: 0xc048566  jal         func_121598
    ctx->pc = 0x14A508u;
    SET_GPR_U32(ctx, 31, 0x14A510u);
    ctx->pc = 0x14A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A508u;
    // 0x14a50c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A508u, 0x14A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A510u;
label_14a510:
    // 0x14a510: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a514: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A514u;
    {
        const bool branch_taken_0x14a514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a514) {
            ctx->pc = 0x14A5A0u;
            goto label_14a5a0;
        }
    }
    ctx->pc = 0x14A51Cu;
    // 0x14a51c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a520: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A520u;
    {
        const bool branch_taken_0x14a520 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x14a520) {
            ctx->pc = 0x14A538u;
            goto label_14a538;
        }
    }
    ctx->pc = 0x14A528u;
    // 0x14a528: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a530: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14A530u;
    {
        const bool branch_taken_0x14a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A530u;
        // 0x14a534: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a530) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A538u;
label_14a538:
    // 0x14a538: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14a53c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A53Cu;
    {
        const bool branch_taken_0x14a53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A53Cu;
        // 0x14a540: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a53c) {
            ctx->pc = 0x14A570u;
            goto label_14a570;
        }
    }
    ctx->pc = 0x14A544u;
    // 0x14a544: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14A544u;
    {
        const bool branch_taken_0x14a544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a544) {
            ctx->pc = 0x14A570u;
            goto label_14a570;
        }
    }
    ctx->pc = 0x14A54Cu;
    // 0x14a54c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x14a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x14a550: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A550u;
    {
        const bool branch_taken_0x14a550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a550) {
            ctx->pc = 0x14A560u;
            goto label_14a560;
        }
    }
    ctx->pc = 0x14A558u;
    // 0x14a558: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A558u;
    {
        const bool branch_taken_0x14a558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a558) {
            ctx->pc = 0x14A570u;
            goto label_14a570;
        }
    }
    ctx->pc = 0x14A560u;
label_14a560:
    // 0x14a560: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a564: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a568: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A568u;
    {
        const bool branch_taken_0x14a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A568u;
        // 0x14a56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a568) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A570u;
label_14a570:
    // 0x14a570: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A574u;
    {
        const bool branch_taken_0x14a574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A574u;
        // 0x14a578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a574) {
            ctx->pc = 0x14A590u;
            goto label_14a590;
        }
    }
    ctx->pc = 0x14A57Cu;
    // 0x14a57c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a580: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A588u;
    {
        const bool branch_taken_0x14a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A588u;
        // 0x14a58c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a588) {
            ctx->pc = 0x14A5A0u;
            goto label_14a5a0;
        }
    }
    ctx->pc = 0x14A590u;
label_14a590:
    // 0x14a590: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a594: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A598u;
    {
        const bool branch_taken_0x14a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A598u;
        // 0x14a59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a598) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A5A0u;
label_14a5a0:
    // 0x14a5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a5a4: 0x0  nop
    ctx->pc = 0x14a5a4u;
    // NOP
label_14a5a8:
    // 0x14a5a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A5B4u;
        // 0x14a5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A5BCu;
}
