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

// Function: sub_003546C0
// Address: 0x3546c0 - 0x354958
void sub_003546C0_0x3546c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003546C0_0x3546c0");
#endif

    switch (ctx->pc) {
        case 0x354710u: goto label_354710;
        case 0x354720u: goto label_354720;
        case 0x354774u: goto label_354774;
        case 0x354784u: goto label_354784;
        case 0x354794u: goto label_354794;
        case 0x3547b0u: goto label_3547b0;
        case 0x3547ccu: goto label_3547cc;
        case 0x3547dcu: goto label_3547dc;
        case 0x354810u: goto label_354810;
        case 0x354828u: goto label_354828;
        case 0x354834u: goto label_354834;
        case 0x354840u: goto label_354840;
        case 0x354854u: goto label_354854;
        case 0x354888u: goto label_354888;
        case 0x354894u: goto label_354894;
        case 0x354948u: goto label_354948;
        default: break;
    }

    ctx->pc = 0x3546c0u;

    // 0x3546c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3546c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3546c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3546c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3546c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3546c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3546cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3546ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3546d0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3546d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3546d4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3546D4u;
    {
        const bool branch_taken_0x3546d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3546D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546D4u;
        // 0x3546d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546d4) {
            ctx->pc = 0x354750u;
            goto label_354750;
        }
    }
    ctx->pc = 0x3546DCu;
    // 0x3546dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3546dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3546e0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3546E0u;
    {
        const bool branch_taken_0x3546e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3546e0) {
            ctx->pc = 0x354730u;
            goto label_354730;
        }
    }
    ctx->pc = 0x3546E8u;
    // 0x3546e8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3546E8u;
    {
        const bool branch_taken_0x3546e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546e8) {
            ctx->pc = 0x3546F8u;
            goto label_3546f8;
        }
    }
    ctx->pc = 0x3546F0u;
    // 0x3546f0: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x3546F0u;
    {
        const bool branch_taken_0x3546f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546f0) {
            ctx->pc = 0x354948u;
            goto label_354948;
        }
    }
    ctx->pc = 0x3546F8u;
label_3546f8:
    // 0x3546f8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3546F8u;
    {
        const bool branch_taken_0x3546f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3546f8) {
            ctx->pc = 0x354718u;
            goto label_354718;
        }
    }
    ctx->pc = 0x354700u;
    // 0x354700: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x354704: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354708: 0xc0aa790  jal         func_2A9E40
    ctx->pc = 0x354708u;
    SET_GPR_U32(ctx, 31, 0x354710u);
    ctx->pc = 0x35470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354708u;
    // 0x35470c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E40u, 0x354708u, 0x354710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354710u;
label_354710:
    // 0x354710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354710u;
    {
        const bool branch_taken_0x354710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354710u;
        // 0x354714: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354710) {
            ctx->pc = 0x354720u;
            goto label_354720;
        }
    }
    ctx->pc = 0x354718u;
label_354718:
    // 0x354718: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354718u;
    SET_GPR_U32(ctx, 31, 0x354720u);
    ctx->pc = 0x35471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354718u;
    // 0x35471c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354718u, 0x354720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354720u;
label_354720:
    // 0x354720: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x354720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x354724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x354724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x354728: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x354728u;
    {
        const bool branch_taken_0x354728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354728u;
        // 0x35472c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354728) {
            ctx->pc = 0x354948u;
            goto label_354948;
        }
    }
    ctx->pc = 0x354730u;
label_354730:
    // 0x354730: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x354730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x354734: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x354734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x354738: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x354738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35473c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x35473cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x354740: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x354740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x354744: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x354744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x354748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x354748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35474c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x35474cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_354750:
    // 0x354750: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x354750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x354754: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x354754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x354758: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x354758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35475c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x354760: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x354760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x354764: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x354764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x354768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x35476c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x35476Cu;
    SET_GPR_U32(ctx, 31, 0x354774u);
    ctx->pc = 0x354770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35476Cu;
    // 0x354770: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x35476Cu, 0x354774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354774u;
label_354774:
    // 0x354774: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x354774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x354778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35477c: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x35477Cu;
    SET_GPR_U32(ctx, 31, 0x354784u);
    ctx->pc = 0x354780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35477Cu;
    // 0x354780: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x35477Cu, 0x354784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354784u;
label_354784:
    // 0x354784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354784u;
    {
        const bool branch_taken_0x354784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354784u;
        // 0x354788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354784) {
            ctx->pc = 0x354798u;
            goto label_354798;
        }
    }
    ctx->pc = 0x35478Cu;
    // 0x35478c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35478Cu;
    SET_GPR_U32(ctx, 31, 0x354794u);
    ctx->pc = 0x354790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35478Cu;
    // 0x354790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35478Cu, 0x354794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354794u;
label_354794:
    // 0x354794: 0x0  nop
    ctx->pc = 0x354794u;
    // NOP
label_354798:
    // 0x354798: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x354798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x35479c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3547a0: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3547a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3547a4: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x3547a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3547a8: 0xc097384  jal         func_25CE10
    ctx->pc = 0x3547A8u;
    SET_GPR_U32(ctx, 31, 0x3547B0u);
    ctx->pc = 0x3547ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547A8u;
    // 0x3547ac: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x3547A8u, 0x3547B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547B0u;
label_3547b0:
    // 0x3547b0: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3547b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3547b4: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3547b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3547b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3547b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3547bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3547c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3547c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547c4: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3547C4u;
    SET_GPR_U32(ctx, 31, 0x3547CCu);
    ctx->pc = 0x3547C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547C4u;
    // 0x3547c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3547C4u, 0x3547CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547CCu;
label_3547cc:
    // 0x3547cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3547CCu;
    {
        const bool branch_taken_0x3547cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3547D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3547CCu;
        // 0x3547d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3547cc) {
            ctx->pc = 0x3547E8u;
            goto label_3547e8;
        }
    }
    ctx->pc = 0x3547D4u;
    // 0x3547d4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3547D4u;
    SET_GPR_U32(ctx, 31, 0x3547DCu);
    ctx->pc = 0x3547D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3547D4u;
    // 0x3547d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3547D4u, 0x3547DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3547DCu;
label_3547dc:
    // 0x3547dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3547DCu;
    {
        const bool branch_taken_0x3547dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3547dc) {
            ctx->pc = 0x354948u;
            goto label_354948;
        }
    }
    ctx->pc = 0x3547E4u;
    // 0x3547e4: 0x0  nop
    ctx->pc = 0x3547e4u;
    // NOP
label_3547e8:
    // 0x3547e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3547e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3547ec: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x3547ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x3547f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3547f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3547f4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3547f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3547f8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x3547f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3547fc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3547fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x354800: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x354800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x354804: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x354804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354808: 0xc0c0980  jal         func_302600
    ctx->pc = 0x354808u;
    SET_GPR_U32(ctx, 31, 0x354810u);
    ctx->pc = 0x35480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354808u;
    // 0x35480c: 0x27aa00ac  addiu       $t2, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302600u, 0x354808u, 0x354810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354810u;
label_354810:
    // 0x354810: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x354810u;
    {
        const bool branch_taken_0x354810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354810) {
            ctx->pc = 0x3548A0u;
            goto label_3548a0;
        }
    }
    ctx->pc = 0x354818u;
    // 0x354818: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x354818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x35481c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354820: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x354820u;
    SET_GPR_U32(ctx, 31, 0x354828u);
    ctx->pc = 0x354824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354820u;
    // 0x354824: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x354820u, 0x354828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354828u;
label_354828:
    // 0x354828: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35482c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x35482Cu;
    SET_GPR_U32(ctx, 31, 0x354834u);
    ctx->pc = 0x354830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35482Cu;
    // 0x354830: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x35482Cu, 0x354834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354834u;
label_354834:
    // 0x354834: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354838: 0xc0766e8  jal         func_1D9BA0
    ctx->pc = 0x354838u;
    SET_GPR_U32(ctx, 31, 0x354840u);
    ctx->pc = 0x35483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354838u;
    // 0x35483c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9BA0u, 0x354838u, 0x354840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354840u;
label_354840:
    // 0x354840: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x354840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x354844: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x354844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354848: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x354848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35484c: 0xc0a90d4  jal         func_2A4350
    ctx->pc = 0x35484Cu;
    SET_GPR_U32(ctx, 31, 0x354854u);
    ctx->pc = 0x354850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35484Cu;
    // 0x354850: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4350u, 0x35484Cu, 0x354854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354854u;
label_354854:
    // 0x354854: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x354854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x354858: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x354858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x35485c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x35485cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x354860: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x354860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x354864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x354864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354868: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x354868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x35486c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x35486cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x354870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x354870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x354874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x354878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35487c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35487cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354880: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x354880u;
    SET_GPR_U32(ctx, 31, 0x354888u);
    ctx->pc = 0x354884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354880u;
    // 0x354884: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x354880u, 0x354888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354888u;
label_354888:
    // 0x354888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x354888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35488c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35488Cu;
    SET_GPR_U32(ctx, 31, 0x354894u);
    ctx->pc = 0x354890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35488Cu;
    // 0x354890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35488Cu, 0x354894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354894u;
label_354894:
    // 0x354894: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x354894u;
    {
        const bool branch_taken_0x354894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354894) {
            ctx->pc = 0x354948u;
            goto label_354948;
        }
    }
    ctx->pc = 0x35489Cu;
    // 0x35489c: 0x0  nop
    ctx->pc = 0x35489cu;
    // NOP
label_3548a0:
    // 0x3548a0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3548a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3548a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3548A4u;
    {
        const bool branch_taken_0x3548a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3548A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548A4u;
        // 0x3548a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548a4) {
            ctx->pc = 0x3548B8u;
            goto label_3548b8;
        }
    }
    ctx->pc = 0x3548ACu;
    // 0x3548ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3548ACu;
    {
        const bool branch_taken_0x3548ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548ac) {
            ctx->pc = 0x354938u;
            goto label_354938;
        }
    }
    ctx->pc = 0x3548B4u;
    // 0x3548b4: 0x0  nop
    ctx->pc = 0x3548b4u;
    // NOP
label_3548b8:
    // 0x3548b8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3548b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3548bc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3548bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3548c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3548c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3548c4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3548c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3548c8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3548c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3548cc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3548CCu;
    {
        const bool branch_taken_0x3548cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3548cc) {
            ctx->pc = 0x354908u;
            goto label_354908;
        }
    }
    ctx->pc = 0x3548D4u;
    // 0x3548d4: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3548d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3548d8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3548d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3548dc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3548DCu;
    {
        const bool branch_taken_0x3548dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3548E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548DCu;
        // 0x3548e0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548dc) {
            ctx->pc = 0x354930u;
            goto label_354930;
        }
    }
    ctx->pc = 0x3548E4u;
    // 0x3548e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3548e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3548e8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3548e8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3548ec: 0x0  nop
    ctx->pc = 0x3548ecu;
    // NOP
    // 0x3548f0: 0x0  nop
    ctx->pc = 0x3548f0u;
    // NOP
    // 0x3548f4: 0x2010  mfhi        $a0
    ctx->pc = 0x3548f4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3548f8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3548f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3548fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3548FCu;
    {
        const bool branch_taken_0x3548fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3548FCu;
        // 0x354900: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3548fc) {
            ctx->pc = 0x354930u;
            goto label_354930;
        }
    }
    ctx->pc = 0x354904u;
    // 0x354904: 0x0  nop
    ctx->pc = 0x354904u;
    // NOP
label_354908:
    // 0x354908: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x354908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35490c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x35490cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x354910: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x354910u;
    {
        const bool branch_taken_0x354910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354910) {
            ctx->pc = 0x354930u;
            goto label_354930;
        }
    }
    ctx->pc = 0x354918u;
    // 0x354918: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x354918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35491c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354920: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x354920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x354924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x354924u;
    {
        const bool branch_taken_0x354924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354924u;
        // 0x354928: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354924) {
            ctx->pc = 0x354938u;
            goto label_354938;
        }
    }
    ctx->pc = 0x35492Cu;
    // 0x35492c: 0x0  nop
    ctx->pc = 0x35492cu;
    // NOP
label_354930:
    // 0x354930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354934: 0x0  nop
    ctx->pc = 0x354934u;
    // NOP
label_354938:
    // 0x354938: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x354938u;
    {
        const bool branch_taken_0x354938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354938u;
        // 0x35493c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354938) {
            ctx->pc = 0x354948u;
            goto label_354948;
        }
    }
    ctx->pc = 0x354940u;
    // 0x354940: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x354940u;
    SET_GPR_U32(ctx, 31, 0x354948u);
    ctx->pc = 0x354944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354940u;
    // 0x354944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x354940u, 0x354948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354948u;
label_354948:
    // 0x354948: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x354948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35494c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35494cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354950: 0x3e00008  jr          $ra
    ctx->pc = 0x354950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354950u;
        // 0x354954: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354958u;
}
