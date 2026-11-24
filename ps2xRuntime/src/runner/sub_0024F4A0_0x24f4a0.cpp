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

// Function: sub_0024F4A0
// Address: 0x24f4a0 - 0x24f65c
void sub_0024F4A0_0x24f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F4A0_0x24f4a0");
#endif

    switch (ctx->pc) {
        case 0x24f4a0u: goto label_24f4a0;
        case 0x24f4a4u: goto label_24f4a4;
        case 0x24f4a8u: goto label_24f4a8;
        case 0x24f4acu: goto label_24f4ac;
        case 0x24f4b0u: goto label_24f4b0;
        case 0x24f4b4u: goto label_24f4b4;
        case 0x24f4b8u: goto label_24f4b8;
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4c0u: goto label_24f4c0;
        case 0x24f4c4u: goto label_24f4c4;
        case 0x24f4c8u: goto label_24f4c8;
        case 0x24f4ccu: goto label_24f4cc;
        case 0x24f4d0u: goto label_24f4d0;
        case 0x24f4d4u: goto label_24f4d4;
        case 0x24f4d8u: goto label_24f4d8;
        case 0x24f4dcu: goto label_24f4dc;
        case 0x24f4e0u: goto label_24f4e0;
        case 0x24f4e4u: goto label_24f4e4;
        case 0x24f4e8u: goto label_24f4e8;
        case 0x24f4ecu: goto label_24f4ec;
        case 0x24f4f0u: goto label_24f4f0;
        case 0x24f4f4u: goto label_24f4f4;
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f4fcu: goto label_24f4fc;
        case 0x24f500u: goto label_24f500;
        case 0x24f504u: goto label_24f504;
        case 0x24f508u: goto label_24f508;
        case 0x24f50cu: goto label_24f50c;
        case 0x24f510u: goto label_24f510;
        case 0x24f514u: goto label_24f514;
        case 0x24f518u: goto label_24f518;
        case 0x24f51cu: goto label_24f51c;
        case 0x24f520u: goto label_24f520;
        case 0x24f524u: goto label_24f524;
        case 0x24f528u: goto label_24f528;
        case 0x24f52cu: goto label_24f52c;
        case 0x24f530u: goto label_24f530;
        case 0x24f534u: goto label_24f534;
        case 0x24f538u: goto label_24f538;
        case 0x24f53cu: goto label_24f53c;
        case 0x24f540u: goto label_24f540;
        case 0x24f544u: goto label_24f544;
        case 0x24f548u: goto label_24f548;
        case 0x24f54cu: goto label_24f54c;
        case 0x24f550u: goto label_24f550;
        case 0x24f554u: goto label_24f554;
        case 0x24f558u: goto label_24f558;
        case 0x24f55cu: goto label_24f55c;
        case 0x24f560u: goto label_24f560;
        case 0x24f564u: goto label_24f564;
        case 0x24f568u: goto label_24f568;
        case 0x24f56cu: goto label_24f56c;
        case 0x24f570u: goto label_24f570;
        case 0x24f574u: goto label_24f574;
        case 0x24f578u: goto label_24f578;
        case 0x24f57cu: goto label_24f57c;
        case 0x24f580u: goto label_24f580;
        case 0x24f584u: goto label_24f584;
        case 0x24f588u: goto label_24f588;
        case 0x24f58cu: goto label_24f58c;
        case 0x24f590u: goto label_24f590;
        case 0x24f594u: goto label_24f594;
        case 0x24f598u: goto label_24f598;
        case 0x24f59cu: goto label_24f59c;
        case 0x24f5a0u: goto label_24f5a0;
        case 0x24f5a4u: goto label_24f5a4;
        case 0x24f5a8u: goto label_24f5a8;
        case 0x24f5acu: goto label_24f5ac;
        case 0x24f5b0u: goto label_24f5b0;
        case 0x24f5b4u: goto label_24f5b4;
        case 0x24f5b8u: goto label_24f5b8;
        case 0x24f5bcu: goto label_24f5bc;
        case 0x24f5c0u: goto label_24f5c0;
        case 0x24f5c4u: goto label_24f5c4;
        case 0x24f5c8u: goto label_24f5c8;
        case 0x24f5ccu: goto label_24f5cc;
        case 0x24f5d0u: goto label_24f5d0;
        case 0x24f5d4u: goto label_24f5d4;
        case 0x24f5d8u: goto label_24f5d8;
        case 0x24f5dcu: goto label_24f5dc;
        case 0x24f5e0u: goto label_24f5e0;
        case 0x24f5e4u: goto label_24f5e4;
        case 0x24f5e8u: goto label_24f5e8;
        case 0x24f5ecu: goto label_24f5ec;
        case 0x24f5f0u: goto label_24f5f0;
        case 0x24f5f4u: goto label_24f5f4;
        case 0x24f5f8u: goto label_24f5f8;
        case 0x24f5fcu: goto label_24f5fc;
        case 0x24f600u: goto label_24f600;
        case 0x24f604u: goto label_24f604;
        case 0x24f608u: goto label_24f608;
        case 0x24f60cu: goto label_24f60c;
        case 0x24f610u: goto label_24f610;
        case 0x24f614u: goto label_24f614;
        case 0x24f618u: goto label_24f618;
        case 0x24f61cu: goto label_24f61c;
        case 0x24f620u: goto label_24f620;
        case 0x24f624u: goto label_24f624;
        case 0x24f628u: goto label_24f628;
        case 0x24f62cu: goto label_24f62c;
        case 0x24f630u: goto label_24f630;
        case 0x24f634u: goto label_24f634;
        case 0x24f638u: goto label_24f638;
        case 0x24f63cu: goto label_24f63c;
        case 0x24f640u: goto label_24f640;
        case 0x24f644u: goto label_24f644;
        case 0x24f648u: goto label_24f648;
        case 0x24f64cu: goto label_24f64c;
        case 0x24f650u: goto label_24f650;
        case 0x24f654u: goto label_24f654;
        case 0x24f658u: goto label_24f658;
        default: break;
    }

    ctx->pc = 0x24f4a0u;

label_24f4a0:
    // 0x24f4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24f4a4:
    // 0x24f4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f4a8:
    // 0x24f4a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_24f4ac:
    // 0x24f4ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24f4b0:
    // 0x24f4b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24f4b4:
    // 0x24f4b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24f4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24f4b8:
    // 0x24f4b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x24f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_24f4bc:
    // 0x24f4bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x24f4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_24f4c0:
    // 0x24f4c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x24f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_24f4c4:
    // 0x24f4c4: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_24f4c8:
    // 0x24f4c8: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_24f4cc:
    if (ctx->pc == 0x24F4CCu) {
        ctx->pc = 0x24F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4C8u;
        // 0x24f4cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4D0u;
        goto label_24f4d0;
    }
    ctx->pc = 0x24F4C8u;
    {
        const bool branch_taken_0x24f4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4C8u;
        // 0x24f4cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4c8) {
            ctx->pc = 0x24F640u;
            goto label_24f640;
        }
    }
    ctx->pc = 0x24F4D0u;
label_24f4d0:
    // 0x24f4d0: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x24f4d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_24f4d4:
    // 0x24f4d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24f4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f4d8:
    // 0x24f4d8: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x24f4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_24f4dc:
    // 0x24f4dc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_24f4e0:
    if (ctx->pc == 0x24F4E0u) {
        ctx->pc = 0x24F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4DCu;
        // 0x24f4e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4E4u;
        goto label_24f4e4;
    }
    ctx->pc = 0x24F4DCu;
    {
        const bool branch_taken_0x24f4dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4DCu;
        // 0x24f4e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4dc) {
            ctx->pc = 0x24F540u;
            goto label_24f540;
        }
    }
    ctx->pc = 0x24F4E4u;
label_24f4e4:
    // 0x24f4e4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f4e8:
    // 0x24f4e8: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24f4ec:
    // 0x24f4ec: 0x0  nop
    ctx->pc = 0x24f4ecu;
    // NOP
label_24f4f0:
    // 0x24f4f0: 0xc091c30  jal         func_2470C0
label_24f4f4:
    if (ctx->pc == 0x24F4F4u) {
        ctx->pc = 0x24F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4F0u;
        // 0x24f4f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F4F8u;
        goto label_24f4f8;
    }
    ctx->pc = 0x24F4F0u;
    SET_GPR_U32(ctx, 31, 0x24F4F8u);
    ctx->pc = 0x24F4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F4F0u;
    // 0x24f4f4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2470C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470C0u, 0x24F4F0u, 0x24F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4F8u;
label_24f4f8:
    // 0x24f4f8: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
label_24f4fc:
    if (ctx->pc == 0x24F4FCu) {
        ctx->pc = 0x24F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4F8u;
        // 0x24f4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F500u;
        goto label_24f500;
    }
    ctx->pc = 0x24F4F8u;
    {
        const bool branch_taken_0x24f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x24F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4F8u;
        // 0x24f4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4f8) {
            ctx->pc = 0x24F528u;
            goto label_24f528;
        }
    }
    ctx->pc = 0x24F500u;
label_24f500:
    // 0x24f500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f504:
    // 0x24f504: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24f504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f508:
    // 0x24f508: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f50c:
    // 0x24f50c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x24f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_24f510:
    // 0x24f510: 0x40f809  jalr        $v0
label_24f514:
    if (ctx->pc == 0x24F514u) {
        ctx->pc = 0x24F518u;
        goto label_24f518;
    }
    ctx->pc = 0x24F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F518u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F510u, 0x24F518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F518u;
label_24f518:
    // 0x24f518: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x24f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_24f51c:
    // 0x24f51c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x24f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24f520:
    // 0x24f520: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x24f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_24f524:
    // 0x24f524: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x24f524u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_24f528:
    // 0x24f528: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x24f528u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_24f52c:
    // 0x24f52c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24f530:
    // 0x24f530: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24f530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24f534:
    // 0x24f534: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x24f534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24f538:
    // 0x24f538: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_24f53c:
    if (ctx->pc == 0x24F53Cu) {
        ctx->pc = 0x24F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F538u;
        // 0x24f53c: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F540u;
        goto label_24f540;
    }
    ctx->pc = 0x24F538u;
    {
        const bool branch_taken_0x24f538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F538u;
        // 0x24f53c: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f538) {
            ctx->pc = 0x24F4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f4f0;
        }
    }
    ctx->pc = 0x24F540u;
label_24f540:
    // 0x24f540: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x24f540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_24f544:
    // 0x24f544: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24f544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_24f548:
    // 0x24f548: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_24f54c:
    if (ctx->pc == 0x24F54Cu) {
        ctx->pc = 0x24F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F548u;
        // 0x24f54c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F550u;
        goto label_24f550;
    }
    ctx->pc = 0x24F548u;
    {
        const bool branch_taken_0x24f548 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F548u;
        // 0x24f54c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f548) {
            ctx->pc = 0x24F640u;
            goto label_24f640;
        }
    }
    ctx->pc = 0x24F550u;
label_24f550:
    // 0x24f550: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_24f554:
    if (ctx->pc == 0x24F554u) {
        ctx->pc = 0x24F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F550u;
        // 0x24f554: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F558u;
        goto label_24f558;
    }
    ctx->pc = 0x24F550u;
    {
        const bool branch_taken_0x24f550 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x24F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F550u;
        // 0x24f554: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f550) {
            ctx->pc = 0x24F640u;
            goto label_24f640;
        }
    }
    ctx->pc = 0x24F558u;
label_24f558:
    // 0x24f558: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x24f558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_24f55c:
    // 0x24f55c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x24f55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24f560:
    // 0x24f560: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f564:
    // 0x24f564: 0x0  nop
    ctx->pc = 0x24f564u;
    // NOP
label_24f568:
    // 0x24f568: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x24f568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_24f56c:
    // 0x24f56c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24f56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f570:
    // 0x24f570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f574:
    // 0x24f574: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f578:
    // 0x24f578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f57c:
    // 0x24f57c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x24f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24f580:
    // 0x24f580: 0x40f809  jalr        $v0
label_24f584:
    if (ctx->pc == 0x24F584u) {
        ctx->pc = 0x24F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F580u;
        // 0x24f584: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F588u;
        goto label_24f588;
    }
    ctx->pc = 0x24F580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F588u);
        ctx->pc = 0x24F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F580u;
        // 0x24f584: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F580u, 0x24F588u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F588u;
label_24f588:
    // 0x24f588: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24f588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f58c:
    // 0x24f58c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x24f58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24f590:
    // 0x24f590: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_24f594:
    // 0x24f594: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f598:
    // 0x24f598: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_24f59c:
    // 0x24f59c: 0x40f809  jalr        $v0
label_24f5a0:
    if (ctx->pc == 0x24F5A0u) {
        ctx->pc = 0x24F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F59Cu;
        // 0x24f5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5A4u;
        goto label_24f5a4;
    }
    ctx->pc = 0x24F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F5A4u);
        ctx->pc = 0x24F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F59Cu;
        // 0x24f5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F59Cu, 0x24F5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F5A4u;
label_24f5a4:
    // 0x24f5a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f5a8:
    // 0x24f5a8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x24f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_24f5ac:
    // 0x24f5ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f5b0:
    // 0x24f5b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x24f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24f5b4:
    // 0x24f5b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x24f5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_24f5b8:
    // 0x24f5b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f5bc:
    // 0x24f5bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x24f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24f5c0:
    // 0x24f5c0: 0x40f809  jalr        $v0
label_24f5c4:
    if (ctx->pc == 0x24F5C4u) {
        ctx->pc = 0x24F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C0u;
        // 0x24f5c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5C8u;
        goto label_24f5c8;
    }
    ctx->pc = 0x24F5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F5C8u);
        ctx->pc = 0x24F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C0u;
        // 0x24f5c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F5C0u, 0x24F5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F5C8u;
label_24f5c8:
    // 0x24f5c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24f5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24f5cc:
    // 0x24f5cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24f5d0:
    // 0x24f5d0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x24f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_24f5d4:
    // 0x24f5d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_24f5d8:
    if (ctx->pc == 0x24F5D8u) {
        ctx->pc = 0x24F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D4u;
        // 0x24f5d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F5DCu;
        goto label_24f5dc;
    }
    ctx->pc = 0x24F5D4u;
    {
        const bool branch_taken_0x24f5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5D4u;
        // 0x24f5d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5d4) {
            ctx->pc = 0x24F600u;
            goto label_24f600;
        }
    }
    ctx->pc = 0x24F5DCu;
label_24f5dc:
    // 0x24f5dc: 0x0  nop
    ctx->pc = 0x24f5dcu;
    // NOP
label_24f5e0:
    // 0x24f5e0: 0x0  nop
    ctx->pc = 0x24f5e0u;
    // NOP
label_24f5e4:
    // 0x24f5e4: 0x0  nop
    ctx->pc = 0x24f5e4u;
    // NOP
label_24f5e8:
    // 0x24f5e8: 0x0  nop
    ctx->pc = 0x24f5e8u;
    // NOP
label_24f5ec:
    // 0x24f5ec: 0x0  nop
    ctx->pc = 0x24f5ecu;
    // NOP
label_24f5f0:
    // 0x24f5f0: 0x0  nop
    ctx->pc = 0x24f5f0u;
    // NOP
label_24f5f4:
    // 0x24f5f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_24f5f8:
    if (ctx->pc == 0x24F5F8u) {
        ctx->pc = 0x24F5FCu;
        goto label_24f5fc;
    }
    ctx->pc = 0x24F5F4u;
    {
        const bool branch_taken_0x24f5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f5f4) {
            ctx->pc = 0x24F5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f5e0;
        }
    }
    ctx->pc = 0x24F5FCu;
label_24f5fc:
    // 0x24f5fc: 0x0  nop
    ctx->pc = 0x24f5fcu;
    // NOP
label_24f600:
    // 0x24f600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24f604:
    // 0x24f604: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24f604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24f608:
    // 0x24f608: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24f60c:
    // 0x24f60c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24f610:
    // 0x24f610: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x24f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_24f614:
    // 0x24f614: 0x40f809  jalr        $v0
label_24f618:
    if (ctx->pc == 0x24F618u) {
        ctx->pc = 0x24F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F614u;
        // 0x24f618: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F61Cu;
        goto label_24f61c;
    }
    ctx->pc = 0x24F614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F61Cu);
        ctx->pc = 0x24F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F614u;
        // 0x24f618: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F614u, 0x24F61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F61Cu;
label_24f61c:
    // 0x24f61c: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x24f61cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
label_24f620:
    // 0x24f620: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x24f620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24f624:
    // 0x24f624: 0xc091cc8  jal         func_247320
label_24f628:
    if (ctx->pc == 0x24F628u) {
        ctx->pc = 0x24F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F624u;
        // 0x24f628: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F62Cu;
        goto label_24f62c;
    }
    ctx->pc = 0x24F624u;
    SET_GPR_U32(ctx, 31, 0x24F62Cu);
    ctx->pc = 0x24F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F624u;
    // 0x24f628: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247320u, 0x24F624u, 0x24F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F62Cu;
label_24f62c:
    // 0x24f62c: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x24f62cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_24f630:
    // 0x24f630: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x24f630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24f634:
    // 0x24f634: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_24f638:
    if (ctx->pc == 0x24F638u) {
        ctx->pc = 0x24F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F634u;
        // 0x24f638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F63Cu;
        goto label_24f63c;
    }
    ctx->pc = 0x24F634u;
    {
        const bool branch_taken_0x24f634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f634) {
            ctx->pc = 0x24F638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F634u;
            // 0x24f638: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f568;
        }
    }
    ctx->pc = 0x24F63Cu;
label_24f63c:
    // 0x24f63c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24f63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24f640:
    // 0x24f640: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24f640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_24f644:
    // 0x24f644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24f648:
    // 0x24f648: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24f648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_24f64c:
    // 0x24f64c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x24f64cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24f650:
    // 0x24f650: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24f650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_24f654:
    // 0x24f654: 0x3e00008  jr          $ra
label_24f658:
    if (ctx->pc == 0x24F658u) {
        ctx->pc = 0x24F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F654u;
        // 0x24f658: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F65Cu;
        goto label_fallthrough_0x24f654;
    }
    ctx->pc = 0x24F654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F654u;
        // 0x24f658: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24f654:
    ctx->pc = 0x24F65Cu;
}
