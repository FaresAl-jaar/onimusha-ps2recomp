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

// Function: sub_003D5770
// Address: 0x3d5770 - 0x3d5b8c
void sub_003D5770_0x3d5770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5770_0x3d5770");
#endif

    switch (ctx->pc) {
        case 0x3d57c0u: goto label_3d57c0;
        case 0x3d57e8u: goto label_3d57e8;
        case 0x3d5818u: goto label_3d5818;
        case 0x3d5860u: goto label_3d5860;
        case 0x3d58c0u: goto label_3d58c0;
        case 0x3d58f4u: goto label_3d58f4;
        case 0x3d5908u: goto label_3d5908;
        case 0x3d5938u: goto label_3d5938;
        case 0x3d5948u: goto label_3d5948;
        case 0x3d5960u: goto label_3d5960;
        case 0x3d5974u: goto label_3d5974;
        case 0x3d59d0u: goto label_3d59d0;
        case 0x3d5a38u: goto label_3d5a38;
        case 0x3d5a60u: goto label_3d5a60;
        case 0x3d5b10u: goto label_3d5b10;
        case 0x3d5b44u: goto label_3d5b44;
        default: break;
    }

    ctx->pc = 0x3d5770u;

    // 0x3d5770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d5770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d5774: 0x24020181  addiu       $v0, $zero, 0x181
    ctx->pc = 0x3d5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x3d5778: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d5778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3d577c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d5780: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d5780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d5784: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d5784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d5788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d578c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d5794: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x3d5794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d5798: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5798u;
    {
        const bool branch_taken_0x3d5798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5798u;
        // 0x3d579c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5798) {
            ctx->pc = 0x3D57A8u;
            goto label_3d57a8;
        }
    }
    ctx->pc = 0x3D57A0u;
    // 0x3d57a0: 0xae805d68  sw          $zero, 0x5D68($s4)
    ctx->pc = 0x3d57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 23912), GPR_U32(ctx, 0));
    // 0x3d57a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d57a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d57a8:
    // 0x3d57a8: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3D57A8u;
    {
        const bool branch_taken_0x3d57a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D57A8u;
        // 0x3d57ac: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d57a8) {
            ctx->pc = 0x3D5918u;
            goto label_3d5918;
        }
    }
    ctx->pc = 0x3D57B0u;
    // 0x3d57b0: 0x2685045c  addiu       $a1, $s4, 0x45C
    ctx->pc = 0x3d57b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1116));
    // 0x3d57b4: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x3d57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x3d57b8: 0xc049522  jal         func_125488
    ctx->pc = 0x3D57B8u;
    SET_GPR_U32(ctx, 31, 0x3D57C0u);
    ctx->pc = 0x3D57BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D57B8u;
    // 0x3d57bc: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3D57B8u, 0x3D57C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D57C0u;
label_3d57c0:
    // 0x3d57c0: 0x8e820234  lw          $v0, 0x234($s4)
    ctx->pc = 0x3d57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 564)));
    // 0x3d57c4: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3d57c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3d57c8: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x3d57c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x3d57cc: 0x2686023c  addiu       $a2, $s4, 0x23C
    ctx->pc = 0x3d57ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 572));
    // 0x3d57d0: 0x24a5c0f8  addiu       $a1, $a1, -0x3F08
    ctx->pc = 0x3d57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951160));
    // 0x3d57d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3d57d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d57d8: 0xac22c0f0  sw          $v0, -0x3F10($at)
    ctx->pc = 0x3d57d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x91C0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0F0u, _value); } while (0);
    // 0x3d57dc: 0x8e820238  lw          $v0, 0x238($s4)
    ctx->pc = 0x3d57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 568)));
    // 0x3d57e0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3d57e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3d57e4: 0xac22c0f4  sw          $v0, -0x3F0C($at)
    ctx->pc = 0x3d57e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x91C0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x91C0F4u, _value); } while (0);
label_3d57e8:
    // 0x3d57e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d57ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d57f0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3d57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d57f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3d57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3d57f8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3d57f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3d57fc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d5800: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5800u;
    {
        const bool branch_taken_0x3d5800 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D5804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5800u;
        // 0x3d5804: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5800) {
            ctx->pc = 0x3D57E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d57e8;
        }
    }
    ctx->pc = 0x3D5808u;
    // 0x3d5808: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x3d5808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x3d580c: 0x268602bc  addiu       $a2, $s4, 0x2BC
    ctx->pc = 0x3d580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 700));
    // 0x3d5810: 0x24a5c178  addiu       $a1, $a1, -0x3E88
    ctx->pc = 0x3d5810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951288));
    // 0x3d5814: 0x24040087  addiu       $a0, $zero, 0x87
    ctx->pc = 0x3d5814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
label_3d5818:
    // 0x3d5818: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d5818u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d581c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d5820: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d5820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d5824: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d5824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5828: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d5828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d582c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d582cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5830: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5830u;
    {
        const bool branch_taken_0x3d5830 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5830u;
        // 0x3d5834: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5830) {
            ctx->pc = 0x3D5818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5818;
        }
    }
    ctx->pc = 0x3D5838u;
    // 0x3d5838: 0x928203cc  lbu         $v0, 0x3CC($s4)
    ctx->pc = 0x3d5838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 972)));
    // 0x3d583c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5840: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x3d5840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x3d5844: 0x268603ce  addiu       $a2, $s4, 0x3CE
    ctx->pc = 0x3d5844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 974));
    // 0x3d5848: 0x24a56c12  addiu       $a1, $a1, 0x6C12
    ctx->pc = 0x3d5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27666));
    // 0x3d584c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3d584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d5850: 0xa0226c10  sb          $v0, 0x6C10($at)
    ctx->pc = 0x3d5850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C10u, _value); } while (0);
    // 0x3d5854: 0x928203cd  lbu         $v0, 0x3CD($s4)
    ctx->pc = 0x3d5854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 973)));
    // 0x3d5858: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d585c: 0xa0226c11  sb          $v0, 0x6C11($at)
    ctx->pc = 0x3d585cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C11u, _value); } while (0);
label_3d5860:
    // 0x3d5860: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d5860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d5864: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d5864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d5868: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d5868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d586c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d586cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5870: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d5870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d5874: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d5874u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5878: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5878u;
    {
        const bool branch_taken_0x3d5878 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5878u;
        // 0x3d587c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5878) {
            ctx->pc = 0x3D5860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5860;
        }
    }
    ctx->pc = 0x3D5880u;
    // 0x3d5880: 0x928203d8  lbu         $v0, 0x3D8($s4)
    ctx->pc = 0x3d5880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 984)));
    // 0x3d5884: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5888: 0x3c05008d  lui         $a1, 0x8D
    ctx->pc = 0x3d5888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
    // 0x3d588c: 0x268603dc  addiu       $a2, $s4, 0x3DC
    ctx->pc = 0x3d588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 988));
    // 0x3d5890: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x3d5890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x3d5894: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3d5894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d5898: 0xa0226c1c  sb          $v0, 0x6C1C($at)
    ctx->pc = 0x3d5898u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
    // 0x3d589c: 0x928203d9  lbu         $v0, 0x3D9($s4)
    ctx->pc = 0x3d589cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 985)));
    // 0x3d58a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d58a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d58a4: 0xa0226c1d  sb          $v0, 0x6C1D($at)
    ctx->pc = 0x3d58a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C1Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Du, _value); } while (0);
    // 0x3d58a8: 0x928203da  lbu         $v0, 0x3DA($s4)
    ctx->pc = 0x3d58a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 986)));
    // 0x3d58ac: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d58acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d58b0: 0xa0226c1e  sb          $v0, 0x6C1E($at)
    ctx->pc = 0x3d58b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C1Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Eu, _value); } while (0);
    // 0x3d58b4: 0x928203db  lbu         $v0, 0x3DB($s4)
    ctx->pc = 0x3d58b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 987)));
    // 0x3d58b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d58b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d58bc: 0xa0226c1f  sb          $v0, 0x6C1F($at)
    ctx->pc = 0x3d58bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6C1Fu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Fu, _value); } while (0);
label_3d58c0:
    // 0x3d58c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3d58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d58c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d58c8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3d58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3d58cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3d58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3d58d0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3d58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3d58d4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3d58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3d58d8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D58D8u;
    {
        const bool branch_taken_0x3d58d8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D58D8u;
        // 0x3d58dc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d58d8) {
            ctx->pc = 0x3D58C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d58c0;
        }
    }
    ctx->pc = 0x3D58E0u;
    // 0x3d58e0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3d58e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3d58e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d58e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d58e8: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x3d58e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x3d58ec: 0xc0ce29c  jal         func_338A70
    ctx->pc = 0x3D58ECu;
    SET_GPR_U32(ctx, 31, 0x3D58F4u);
    ctx->pc = 0x3D58F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D58ECu;
    // 0x3d58f0: 0x26862f30  addiu       $a2, $s4, 0x2F30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A70u, 0x3D58ECu, 0x3D58F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D58F4u;
label_3d58f4:
    // 0x3d58f4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3d58f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3d58f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d58f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d58fc: 0x2484a100  addiu       $a0, $a0, -0x5F00
    ctx->pc = 0x3d58fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    // 0x3d5900: 0xc0d83d0  jal         func_360F40
    ctx->pc = 0x3D5900u;
    SET_GPR_U32(ctx, 31, 0x3D5908u);
    ctx->pc = 0x3D5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5900u;
    // 0x3d5904: 0x26863de4  addiu       $a2, $s4, 0x3DE4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 15844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360F40u, 0x3D5900u, 0x3D5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5908u;
label_3d5908:
    // 0x3d5908: 0x8e825d64  lw          $v0, 0x5D64($s4)
    ctx->pc = 0x3d5908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 23908)));
    // 0x3d590c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3d590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3d5910: 0xac2240f0  sw          $v0, 0x40F0($at)
    ctx->pc = 0x3d5910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x9140F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140F0u, _value); } while (0);
    // 0x3d5914: 0x0  nop
    ctx->pc = 0x3d5914u;
    // NOP
label_3d5918:
    // 0x3d5918: 0x928203cc  lbu         $v0, 0x3CC($s4)
    ctx->pc = 0x3d5918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 972)));
    // 0x3d591c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3d591cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3d5920: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5924: 0x2484bb80  addiu       $a0, $a0, -0x4480
    ctx->pc = 0x3d5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949760));
    // 0x3d5928: 0x26850c5c  addiu       $a1, $s4, 0xC5C
    ctx->pc = 0x3d5928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3164));
    // 0x3d592c: 0x240622d4  addiu       $a2, $zero, 0x22D4
    ctx->pc = 0x3d592cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8916));
    // 0x3d5930: 0xc049522  jal         func_125488
    ctx->pc = 0x3D5930u;
    SET_GPR_U32(ctx, 31, 0x3D5938u);
    ctx->pc = 0x3D5934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5930u;
    // 0x3d5934: 0xa0226c10  sb          $v0, 0x6C10($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27664), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x3D5930u, 0x3D5938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5938u;
label_3d5938:
    // 0x3d5938: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5938u;
    {
        const bool branch_taken_0x3d5938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5938u;
        // 0x3d593c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5938) {
            ctx->pc = 0x3D5948u;
            goto label_3d5948;
        }
    }
    ctx->pc = 0x3D5940u;
    // 0x3d5940: 0xc0fdb08  jal         func_3F6C20
    ctx->pc = 0x3D5940u;
    SET_GPR_U32(ctx, 31, 0x3D5948u);
    ctx->pc = 0x3D5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5940u;
    // 0x3d5944: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6C20u, 0x3D5940u, 0x3D5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5948u;
label_3d5948:
    // 0x3d5948: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x3d5948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3d594c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x3D594Cu;
    {
        const bool branch_taken_0x3d594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D594Cu;
        // 0x3d5950: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d594c) {
            ctx->pc = 0x3D5AD0u;
            goto label_3d5ad0;
        }
    }
    ctx->pc = 0x3D5954u;
    // 0x3d5954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d5954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5958: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3d5958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d595c: 0x0  nop
    ctx->pc = 0x3d595cu;
    // NOP
label_3d5960:
    // 0x3d5960: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x3d5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3d5964: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3d5964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3d5968: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x3d5968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3d596c: 0xc0d2854  jal         func_34A150
    ctx->pc = 0x3D596Cu;
    SET_GPR_U32(ctx, 31, 0x3D5974u);
    ctx->pc = 0x3D5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D596Cu;
    // 0x3d5970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A150u, 0x3D596Cu, 0x3D5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5974u;
label_3d5974:
    // 0x3d5974: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x3d5974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x3d5978: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x3d597c: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x3d597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x3d5980: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3d5980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d5984: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x3d5984u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5988: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x3d5988u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3d598c: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x3d598cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5990: 0x9602004a  lhu         $v0, 0x4A($s0)
    ctx->pc = 0x3d5990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x3d5994: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x3d5994u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5998: 0x9602004c  lhu         $v0, 0x4C($s0)
    ctx->pc = 0x3d5998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d599c: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x3d599cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d59a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3d59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3d59a4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3d59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x3d59a8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3d59ac: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d59acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x3d59b0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x3d59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3d59b4: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3d59b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x3d59b8: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x3d59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3d59bc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x3d59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x3d59c0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3d59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3d59c4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3d59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x3d59c8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3d59cc: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3d59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3d59d0:
    // 0x3d59d0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3d59d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d59d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d59d8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3d59d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d59dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d59e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3d59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3d59e4: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D59E4u;
    {
        const bool branch_taken_0x3d59e4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d59e4) {
            ctx->pc = 0x3D59D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d59d0;
        }
    }
    ctx->pc = 0x3D59ECu;
    // 0x3d59ec: 0x92020079  lbu         $v0, 0x79($s0)
    ctx->pc = 0x3d59ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x3d59f0: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x3d59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3d59f4: 0x26440044  addiu       $a0, $s2, 0x44
    ctx->pc = 0x3d59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x3d59f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d59f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d59fc: 0xa2420039  sb          $v0, 0x39($s2)
    ctx->pc = 0x3d59fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5a00: 0x9202007a  lbu         $v0, 0x7A($s0)
    ctx->pc = 0x3d5a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x3d5a04: 0xa242003a  sb          $v0, 0x3A($s2)
    ctx->pc = 0x3d5a04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5a08: 0x9602007c  lhu         $v0, 0x7C($s0)
    ctx->pc = 0x3d5a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3d5a0c: 0xa642003c  sh          $v0, 0x3C($s2)
    ctx->pc = 0x3d5a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5a10: 0x9602007e  lhu         $v0, 0x7E($s0)
    ctx->pc = 0x3d5a10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 126)));
    // 0x3d5a14: 0xa642003e  sh          $v0, 0x3E($s2)
    ctx->pc = 0x3d5a14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5a18: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3d5a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d5a1c: 0xa2420040  sb          $v0, 0x40($s2)
    ctx->pc = 0x3d5a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5a20: 0x92020081  lbu         $v0, 0x81($s0)
    ctx->pc = 0x3d5a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x3d5a24: 0xa2420041  sb          $v0, 0x41($s2)
    ctx->pc = 0x3d5a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5a28: 0x92020082  lbu         $v0, 0x82($s0)
    ctx->pc = 0x3d5a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3d5a2c: 0xa2420042  sb          $v0, 0x42($s2)
    ctx->pc = 0x3d5a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5a30: 0x92020083  lbu         $v0, 0x83($s0)
    ctx->pc = 0x3d5a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3d5a34: 0xa2420043  sb          $v0, 0x43($s2)
    ctx->pc = 0x3d5a34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 2));
label_3d5a38:
    // 0x3d5a38: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x3d5a38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d5a3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d5a40: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d5a40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5a44: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3d5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3d5a48: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3d5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3d5a4c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D5A4Cu;
    {
        const bool branch_taken_0x3d5a4c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d5a4c) {
            ctx->pc = 0x3D5A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5a38;
        }
    }
    ctx->pc = 0x3D5A54u;
    // 0x3d5a54: 0x2605008e  addiu       $a1, $s0, 0x8E
    ctx->pc = 0x3d5a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 142));
    // 0x3d5a58: 0x2644004e  addiu       $a0, $s2, 0x4E
    ctx->pc = 0x3d5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 78));
    // 0x3d5a5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d5a60:
    // 0x3d5a60: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x3d5a60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d5a64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d5a68: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3d5a68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d5a6c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3d5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3d5a70: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3d5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3d5a74: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D5A74u;
    {
        const bool branch_taken_0x3d5a74 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d5a74) {
            ctx->pc = 0x3D5A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5a60;
        }
    }
    ctx->pc = 0x3D5A7Cu;
    // 0x3d5a7c: 0x96030098  lhu         $v1, 0x98($s0)
    ctx->pc = 0x3d5a7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x3d5a80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d5a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3d5a84: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x3d5a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3d5a88: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x3d5a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x3d5a8c: 0xa6430058  sh          $v1, 0x58($s2)
    ctx->pc = 0x3d5a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d5a90: 0x9203009a  lbu         $v1, 0x9A($s0)
    ctx->pc = 0x3d5a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
    // 0x3d5a94: 0xa243005a  sb          $v1, 0x5A($s2)
    ctx->pc = 0x3d5a94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5a98: 0x9203009b  lbu         $v1, 0x9B($s0)
    ctx->pc = 0x3d5a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 155)));
    // 0x3d5a9c: 0xa243005b  sb          $v1, 0x5B($s2)
    ctx->pc = 0x3d5a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5aa0: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x3d5aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x3d5aa4: 0xa243005c  sb          $v1, 0x5C($s2)
    ctx->pc = 0x3d5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5aa8: 0x9204009d  lbu         $a0, 0x9D($s0)
    ctx->pc = 0x3d5aa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 157)));
    // 0x3d5aac: 0x9203009e  lbu         $v1, 0x9E($s0)
    ctx->pc = 0x3d5aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x3d5ab0: 0xa244005d  sb          $a0, 0x5D($s2)
    ctx->pc = 0x3d5ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d5ab4: 0xa243005e  sb          $v1, 0x5E($s2)
    ctx->pc = 0x3d5ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 94), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5ab8: 0x9203009f  lbu         $v1, 0x9F($s0)
    ctx->pc = 0x3d5ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 159)));
    // 0x3d5abc: 0xa243005f  sb          $v1, 0x5F($s2)
    ctx->pc = 0x3d5abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5ac0: 0x920300a0  lbu         $v1, 0xA0($s0)
    ctx->pc = 0x3d5ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3d5ac4: 0xa2430060  sb          $v1, 0x60($s2)
    ctx->pc = 0x3d5ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5ac8: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x3D5AC8u;
    {
        const bool branch_taken_0x3d5ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AC8u;
        // 0x3d5acc: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ac8) {
            ctx->pc = 0x3D5960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5960;
        }
    }
    ctx->pc = 0x3D5AD0u;
label_3d5ad0:
    // 0x3d5ad0: 0x92823dd4  lbu         $v0, 0x3DD4($s4)
    ctx->pc = 0x3d5ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15828)));
    // 0x3d5ad4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d5ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d5ad8: 0x3c05008e  lui         $a1, 0x8E
    ctx->pc = 0x3d5ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)142 << 16));
    // 0x3d5adc: 0x26863dd8  addiu       $a2, $s4, 0x3DD8
    ctx->pc = 0x3d5adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 15832));
    // 0x3d5ae0: 0x24a5e024  addiu       $a1, $a1, -0x1FDC
    ctx->pc = 0x3d5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959140));
    // 0x3d5ae4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3d5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3d5ae8: 0xa022e020  sb          $v0, -0x1FE0($at)
    ctx->pc = 0x3d5ae8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE020u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE020u, _value); } while (0);
    // 0x3d5aec: 0x92823dd5  lbu         $v0, 0x3DD5($s4)
    ctx->pc = 0x3d5aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15829)));
    // 0x3d5af0: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d5af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d5af4: 0xa022e021  sb          $v0, -0x1FDF($at)
    ctx->pc = 0x3d5af4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE021u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE021u, _value); } while (0);
    // 0x3d5af8: 0x92823dd6  lbu         $v0, 0x3DD6($s4)
    ctx->pc = 0x3d5af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15830)));
    // 0x3d5afc: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d5afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d5b00: 0xa022e022  sb          $v0, -0x1FDE($at)
    ctx->pc = 0x3d5b00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE022u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE022u, _value); } while (0);
    // 0x3d5b04: 0x92823dd7  lbu         $v0, 0x3DD7($s4)
    ctx->pc = 0x3d5b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 15831)));
    // 0x3d5b08: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x3d5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x3d5b0c: 0xa022e023  sb          $v0, -0x1FDD($at)
    ctx->pc = 0x3d5b0cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE023u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE023u, _value); } while (0);
label_3d5b10:
    // 0x3d5b10: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3d5b10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d5b14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3d5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d5b18: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x3d5b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x3d5b1c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3d5b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5b20: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x3d5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x3d5b24: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3d5b24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d5b28: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D5B28u;
    {
        const bool branch_taken_0x3d5b28 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3D5B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B28u;
        // 0x3d5b2c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5b28) {
            ctx->pc = 0x3D5B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5b10;
        }
    }
    ctx->pc = 0x3D5B30u;
    // 0x3d5b30: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3d5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3d5b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d5b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5b38: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x3d5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x3d5b3c: 0xc0d4354  jal         func_350D50
    ctx->pc = 0x3D5B3Cu;
    SET_GPR_U32(ctx, 31, 0x3D5B44u);
    ctx->pc = 0x3D5B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5B3Cu;
    // 0x3d5b40: 0x26865d68  addiu       $a2, $s4, 0x5D68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 23912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D50u, 0x3D5B3Cu, 0x3D5B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5B44u;
label_3d5b44:
    // 0x3d5b44: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3d5b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3d5b48: 0x96850010  lhu         $a1, 0x10($s4)
    ctx->pc = 0x3d5b48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3d5b4c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3d5b4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3d5b50: 0x27838a54  addiu       $v1, $gp, -0x75AC
    ctx->pc = 0x3d5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x3d5b54: 0xa3858a54  sb          $a1, -0x75AC($gp)
    ctx->pc = 0x3d5b54u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d5b5c: 0x96840012  lhu         $a0, 0x12($s4)
    ctx->pc = 0x3d5b5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x3d5b60: 0xa3848a55  sb          $a0, -0x75AB($gp)
    ctx->pc = 0x3d5b60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d5b64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3d5b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d5b68: 0xa3838a6c  sb          $v1, -0x7594($gp)
    ctx->pc = 0x3d5b68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937196), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5b6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d5b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d5b70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d5b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d5b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d5b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d5b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d5b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5b84: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5B84u;
        // 0x3d5b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5B8Cu;
}
