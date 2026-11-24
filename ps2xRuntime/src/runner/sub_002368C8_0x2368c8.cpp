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

// Function: sub_002368C8
// Address: 0x2368c8 - 0x236a04
void sub_002368C8_0x2368c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002368C8_0x2368c8");
#endif

    switch (ctx->pc) {
        case 0x2368c8u: goto label_2368c8;
        case 0x2368ccu: goto label_2368cc;
        case 0x2368d0u: goto label_2368d0;
        case 0x2368d4u: goto label_2368d4;
        case 0x2368d8u: goto label_2368d8;
        case 0x2368dcu: goto label_2368dc;
        case 0x2368e0u: goto label_2368e0;
        case 0x2368e4u: goto label_2368e4;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368ecu: goto label_2368ec;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368f4u: goto label_2368f4;
        case 0x2368f8u: goto label_2368f8;
        case 0x2368fcu: goto label_2368fc;
        case 0x236900u: goto label_236900;
        case 0x236904u: goto label_236904;
        case 0x236908u: goto label_236908;
        case 0x23690cu: goto label_23690c;
        case 0x236910u: goto label_236910;
        case 0x236914u: goto label_236914;
        case 0x236918u: goto label_236918;
        case 0x23691cu: goto label_23691c;
        case 0x236920u: goto label_236920;
        case 0x236924u: goto label_236924;
        case 0x236928u: goto label_236928;
        case 0x23692cu: goto label_23692c;
        case 0x236930u: goto label_236930;
        case 0x236934u: goto label_236934;
        case 0x236938u: goto label_236938;
        case 0x23693cu: goto label_23693c;
        case 0x236940u: goto label_236940;
        case 0x236944u: goto label_236944;
        case 0x236948u: goto label_236948;
        case 0x23694cu: goto label_23694c;
        case 0x236950u: goto label_236950;
        case 0x236954u: goto label_236954;
        case 0x236958u: goto label_236958;
        case 0x23695cu: goto label_23695c;
        case 0x236960u: goto label_236960;
        case 0x236964u: goto label_236964;
        case 0x236968u: goto label_236968;
        case 0x23696cu: goto label_23696c;
        case 0x236970u: goto label_236970;
        case 0x236974u: goto label_236974;
        case 0x236978u: goto label_236978;
        case 0x23697cu: goto label_23697c;
        case 0x236980u: goto label_236980;
        case 0x236984u: goto label_236984;
        case 0x236988u: goto label_236988;
        case 0x23698cu: goto label_23698c;
        case 0x236990u: goto label_236990;
        case 0x236994u: goto label_236994;
        case 0x236998u: goto label_236998;
        case 0x23699cu: goto label_23699c;
        case 0x2369a0u: goto label_2369a0;
        case 0x2369a4u: goto label_2369a4;
        case 0x2369a8u: goto label_2369a8;
        case 0x2369acu: goto label_2369ac;
        case 0x2369b0u: goto label_2369b0;
        case 0x2369b4u: goto label_2369b4;
        case 0x2369b8u: goto label_2369b8;
        case 0x2369bcu: goto label_2369bc;
        case 0x2369c0u: goto label_2369c0;
        case 0x2369c4u: goto label_2369c4;
        case 0x2369c8u: goto label_2369c8;
        case 0x2369ccu: goto label_2369cc;
        case 0x2369d0u: goto label_2369d0;
        case 0x2369d4u: goto label_2369d4;
        case 0x2369d8u: goto label_2369d8;
        case 0x2369dcu: goto label_2369dc;
        case 0x2369e0u: goto label_2369e0;
        case 0x2369e4u: goto label_2369e4;
        case 0x2369e8u: goto label_2369e8;
        case 0x2369ecu: goto label_2369ec;
        case 0x2369f0u: goto label_2369f0;
        case 0x2369f4u: goto label_2369f4;
        case 0x2369f8u: goto label_2369f8;
        case 0x2369fcu: goto label_2369fc;
        case 0x236a00u: goto label_236a00;
        default: break;
    }

    ctx->pc = 0x2368c8u;

label_2368c8:
    // 0x2368c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2368c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2368cc:
    // 0x2368cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2368ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2368d0:
    // 0x2368d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2368d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2368d4:
    // 0x2368d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2368d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2368d8:
    // 0x2368d8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2368d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2368dc:
    // 0x2368dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2368dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2368e0:
    // 0x2368e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2368e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2368e4:
    // 0x2368e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2368e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2368e8:
    // 0x2368e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2368e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2368ec:
    // 0x2368ec: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x2368ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_2368f0:
    // 0x2368f0: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2368f4:
    // 0x2368f4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x2368f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2368f8:
    // 0x2368f8: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_2368fc:
    if (ctx->pc == 0x2368FCu) {
        ctx->pc = 0x2368FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368F8u;
        // 0x2368fc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236900u;
        goto label_236900;
    }
    ctx->pc = 0x2368F8u;
    {
        const bool branch_taken_0x2368f8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2368FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368F8u;
        // 0x2368fc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368f8) {
            ctx->pc = 0x236964u;
            goto label_236964;
        }
    }
    ctx->pc = 0x236900u;
label_236900:
    // 0x236900: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x236900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_236904:
    // 0x236904: 0x0  nop
    ctx->pc = 0x236904u;
    // NOP
label_236908:
    // 0x236908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x236908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23690c:
    // 0x23690c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x23690cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_236910:
    // 0x236910: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x236910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236914:
    // 0x236914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236918:
    // 0x236918: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23691c:
    // 0x23691c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x23691cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_236920:
    // 0x236920: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x236920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_236924:
    // 0x236924: 0x40f809  jalr        $v0
label_236928:
    if (ctx->pc == 0x236928u) {
        ctx->pc = 0x236928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236924u;
        // 0x236928: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23692Cu;
        goto label_23692c;
    }
    ctx->pc = 0x236924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23692Cu);
        ctx->pc = 0x236928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236924u;
        // 0x236928: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236924u, 0x23692Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23692Cu;
label_23692c:
    // 0x23692c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236930:
    // 0x236930: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x236930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_236934:
    // 0x236934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236938:
    // 0x236938: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23693c:
    // 0x23693c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23693cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236940:
    // 0x236940: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x236940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_236944:
    // 0x236944: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x236944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_236948:
    // 0x236948: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_23694c:
    // 0x23694c: 0x60f809  jalr        $v1
label_236950:
    if (ctx->pc == 0x236950u) {
        ctx->pc = 0x236950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23694Cu;
        // 0x236950: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236954u;
        goto label_236954;
    }
    ctx->pc = 0x23694Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236954u);
        ctx->pc = 0x236950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23694Cu;
        // 0x236950: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23694Cu, 0x236954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236954u;
label_236954:
    // 0x236954: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x236954u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_236958:
    // 0x236958: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x236958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23695c:
    // 0x23695c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_236960:
    if (ctx->pc == 0x236960u) {
        ctx->pc = 0x236960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23695Cu;
        // 0x236960: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236964u;
        goto label_236964;
    }
    ctx->pc = 0x23695Cu;
    {
        const bool branch_taken_0x23695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23695Cu;
        // 0x236960: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23695c) {
            ctx->pc = 0x236908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236908;
        }
    }
    ctx->pc = 0x236964u;
label_236964:
    // 0x236964: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x236964u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_236968:
    // 0x236968: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x236968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_23696c:
    // 0x23696c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x23696cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_236970:
    // 0x236970: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x236970u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_236974:
    // 0x236974: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_236978:
    if (ctx->pc == 0x236978u) {
        ctx->pc = 0x236978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236974u;
        // 0x236978: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23697Cu;
        goto label_23697c;
    }
    ctx->pc = 0x236974u;
    {
        const bool branch_taken_0x236974 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x236978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236974u;
        // 0x236978: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236974) {
            ctx->pc = 0x2369E8u;
            goto label_2369e8;
        }
    }
    ctx->pc = 0x23697Cu;
label_23697c:
    // 0x23697c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x23697cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_236980:
    // 0x236980: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_236984:
    if (ctx->pc == 0x236984u) {
        ctx->pc = 0x236984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236980u;
        // 0x236984: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236988u;
        goto label_236988;
    }
    ctx->pc = 0x236980u;
    {
        const bool branch_taken_0x236980 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x236984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236980u;
        // 0x236984: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236980) {
            ctx->pc = 0x2369D8u;
            goto label_2369d8;
        }
    }
    ctx->pc = 0x236988u;
label_236988:
    // 0x236988: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x236988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_23698c:
    // 0x23698c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_236990:
    // 0x236990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x236990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_236994:
    // 0x236994: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x236994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236998:
    // 0x236998: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x236998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23699c:
    // 0x23699c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2369a0:
    // 0x2369a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2369a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2369a4:
    // 0x2369a4: 0x40f809  jalr        $v0
label_2369a8:
    if (ctx->pc == 0x2369A8u) {
        ctx->pc = 0x2369A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369A4u;
        // 0x2369a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369ACu;
        goto label_2369ac;
    }
    ctx->pc = 0x2369A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2369ACu);
        ctx->pc = 0x2369A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369A4u;
        // 0x2369a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2369A4u, 0x2369ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2369ACu;
label_2369ac:
    // 0x2369ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2369acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2369b0:
    // 0x2369b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2369b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2369b4:
    // 0x2369b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2369b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2369b8:
    // 0x2369b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2369b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2369bc:
    // 0x2369bc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2369bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2369c0:
    // 0x2369c0: 0x60f809  jalr        $v1
label_2369c4:
    if (ctx->pc == 0x2369C4u) {
        ctx->pc = 0x2369C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369C0u;
        // 0x2369c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369C8u;
        goto label_2369c8;
    }
    ctx->pc = 0x2369C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2369C8u);
        ctx->pc = 0x2369C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369C0u;
        // 0x2369c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2369C0u, 0x2369C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2369C8u;
label_2369c8:
    // 0x2369c8: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x2369c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2369cc:
    // 0x2369cc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2369ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2369d0:
    // 0x2369d0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_2369d4:
    if (ctx->pc == 0x2369D4u) {
        ctx->pc = 0x2369D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369D0u;
        // 0x2369d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2369D8u;
        goto label_2369d8;
    }
    ctx->pc = 0x2369D0u;
    {
        const bool branch_taken_0x2369d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2369d0) {
            ctx->pc = 0x2369D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2369D0u;
            // 0x2369d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_236990;
        }
    }
    ctx->pc = 0x2369D8u;
label_2369d8:
    // 0x2369d8: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x2369d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_2369dc:
    // 0x2369dc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2369dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2369e0:
    // 0x2369e0: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x2369e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_2369e4:
    // 0x2369e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2369e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2369e8:
    // 0x2369e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2369e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2369ec:
    // 0x2369ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2369ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2369f0:
    // 0x2369f0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2369f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2369f4:
    // 0x2369f4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2369f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2369f8:
    // 0x2369f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2369f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2369fc:
    // 0x2369fc: 0x3e00008  jr          $ra
label_236a00:
    if (ctx->pc == 0x236A00u) {
        ctx->pc = 0x236A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369FCu;
        // 0x236a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236A04u;
        goto label_fallthrough_0x2369fc;
    }
    ctx->pc = 0x2369FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2369FCu;
        // 0x236a00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2369FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2369fc:
    ctx->pc = 0x236A04u;
}
