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

// Function: sub_003B66F0
// Address: 0x3b66f0 - 0x3b68c8
void sub_003B66F0_0x3b66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B66F0_0x3b66f0");
#endif

    switch (ctx->pc) {
        case 0x3b6740u: goto label_3b6740;
        case 0x3b6750u: goto label_3b6750;
        case 0x3b6790u: goto label_3b6790;
        case 0x3b67a0u: goto label_3b67a0;
        case 0x3b680cu: goto label_3b680c;
        case 0x3b68b8u: goto label_3b68b8;
        default: break;
    }

    ctx->pc = 0x3b66f0u;

    // 0x3b66f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b66f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b66f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b66f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b66f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b66fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b66fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b6700: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3b6700u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3b6704: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3B6704u;
    {
        const bool branch_taken_0x3b6704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B6708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6704u;
        // 0x3b6708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6704) {
            ctx->pc = 0x3B6780u;
            goto label_3b6780;
        }
    }
    ctx->pc = 0x3B670Cu;
    // 0x3b670c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6710: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B6710u;
    {
        const bool branch_taken_0x3b6710 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6710) {
            ctx->pc = 0x3B6760u;
            goto label_3b6760;
        }
    }
    ctx->pc = 0x3B6718u;
    // 0x3b6718: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6718u;
    {
        const bool branch_taken_0x3b6718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6718) {
            ctx->pc = 0x3B6728u;
            goto label_3b6728;
        }
    }
    ctx->pc = 0x3B6720u;
    // 0x3b6720: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x3B6720u;
    {
        const bool branch_taken_0x3b6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6720) {
            ctx->pc = 0x3B68B8u;
            goto label_3b68b8;
        }
    }
    ctx->pc = 0x3B6728u;
label_3b6728:
    // 0x3b6728: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6728u;
    {
        const bool branch_taken_0x3b6728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6728) {
            ctx->pc = 0x3B6748u;
            goto label_3b6748;
        }
    }
    ctx->pc = 0x3B6730u;
    // 0x3b6730: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3b6730u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3b6734: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b6734u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b6738: 0xc0aa4e4  jal         func_2A9390
    ctx->pc = 0x3B6738u;
    SET_GPR_U32(ctx, 31, 0x3B6740u);
    ctx->pc = 0x3B673Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6738u;
    // 0x3b673c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9390u, 0x3B6738u, 0x3B6740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6740u;
label_3b6740:
    // 0x3b6740: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6740u;
    {
        const bool branch_taken_0x3b6740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6740u;
        // 0x3b6744: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6740) {
            ctx->pc = 0x3B6750u;
            goto label_3b6750;
        }
    }
    ctx->pc = 0x3B6748u;
label_3b6748:
    // 0x3b6748: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6748u;
    SET_GPR_U32(ctx, 31, 0x3B6750u);
    ctx->pc = 0x3B674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6748u;
    // 0x3b674c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6748u, 0x3B6750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6750u;
label_3b6750:
    // 0x3b6750: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3b6750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b6754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b6758: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3B6758u;
    {
        const bool branch_taken_0x3b6758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6758u;
        // 0x3b675c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6758) {
            ctx->pc = 0x3B68B8u;
            goto label_3b68b8;
        }
    }
    ctx->pc = 0x3B6760u;
label_3b6760:
    // 0x3b6760: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3b6760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3b6764: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3b6764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6768: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3b6768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b676c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3b676cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6770: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3b6770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6774: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3b6774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3b6778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b677c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3b677cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b6780:
    // 0x3b6780: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x3b6780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3b6784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6788: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B6788u;
    SET_GPR_U32(ctx, 31, 0x3B6790u);
    ctx->pc = 0x3B678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6788u;
    // 0x3b678c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B6788u, 0x3B6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6790u;
label_3b6790:
    // 0x3b6790: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6790u;
    {
        const bool branch_taken_0x3b6790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6790u;
        // 0x3b6794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6790) {
            ctx->pc = 0x3B67A0u;
            goto label_3b67a0;
        }
    }
    ctx->pc = 0x3B6798u;
    // 0x3b6798: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B6798u;
    SET_GPR_U32(ctx, 31, 0x3B67A0u);
    ctx->pc = 0x3B679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6798u;
    // 0x3b679c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B6798u, 0x3B67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B67A0u;
label_3b67a0:
    // 0x3b67a0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b67a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b67a4: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B67A4u;
    {
        const bool branch_taken_0x3b67a4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3B67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67A4u;
        // 0x3b67a8: 0x28610056  slti        $at, $v1, 0x56 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)86) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b67a4) {
            ctx->pc = 0x3B6810u;
            goto label_3b6810;
        }
    }
    ctx->pc = 0x3B67ACu;
    // 0x3b67ac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B67ACu;
    {
        const bool branch_taken_0x3b67ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b67ac) {
            ctx->pc = 0x3B6810u;
            goto label_3b6810;
        }
    }
    ctx->pc = 0x3B67B4u;
    // 0x3b67b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b67b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b67b8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3b67b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b67bc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b67bcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b67c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b67c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b67c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b67c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b67c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b67c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b67cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b67ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b67d0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3b67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3b67d4: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b67d4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b67d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b67d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b67dc: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3b67dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3b67e0: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b67e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b67e4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b67e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b67e8: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3b67e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3b67ec: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b67ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b67f0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b67f0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b67f4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b67f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b67f8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b67fc: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x3b67fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x3b6800: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x3b6800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b6804: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B6804u;
    SET_GPR_U32(ctx, 31, 0x3B680Cu);
    ctx->pc = 0x3B6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6804u;
    // 0x3b6808: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B6804u, 0x3B680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B680Cu;
label_3b680c:
    // 0x3b680c: 0x0  nop
    ctx->pc = 0x3b680cu;
    // NOP
label_3b6810:
    // 0x3b6810: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3b6810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3b6814: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6814u;
    {
        const bool branch_taken_0x3b6814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6814u;
        // 0x3b6818: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6814) {
            ctx->pc = 0x3B6828u;
            goto label_3b6828;
        }
    }
    ctx->pc = 0x3B681Cu;
    // 0x3b681c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B681Cu;
    {
        const bool branch_taken_0x3b681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b681c) {
            ctx->pc = 0x3B68A8u;
            goto label_3b68a8;
        }
    }
    ctx->pc = 0x3B6824u;
    // 0x3b6824: 0x0  nop
    ctx->pc = 0x3b6824u;
    // NOP
label_3b6828:
    // 0x3b6828: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3b6828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b682c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b6830: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b6830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b6834: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b6838: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3b6838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3b683c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B683Cu;
    {
        const bool branch_taken_0x3b683c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b683c) {
            ctx->pc = 0x3B6878u;
            goto label_3b6878;
        }
    }
    ctx->pc = 0x3B6844u;
    // 0x3b6844: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3b6844u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b6848: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b6848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b684c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B684Cu;
    {
        const bool branch_taken_0x3b684c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B684Cu;
        // 0x3b6850: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b684c) {
            ctx->pc = 0x3B68A0u;
            goto label_3b68a0;
        }
    }
    ctx->pc = 0x3B6854u;
    // 0x3b6854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b6854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6858: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b6858u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b685c: 0x0  nop
    ctx->pc = 0x3b685cu;
    // NOP
    // 0x3b6860: 0x0  nop
    ctx->pc = 0x3b6860u;
    // NOP
    // 0x3b6864: 0x2010  mfhi        $a0
    ctx->pc = 0x3b6864u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b6868: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b686c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B686Cu;
    {
        const bool branch_taken_0x3b686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B686Cu;
        // 0x3b6870: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b686c) {
            ctx->pc = 0x3B68A0u;
            goto label_3b68a0;
        }
    }
    ctx->pc = 0x3B6874u;
    // 0x3b6874: 0x0  nop
    ctx->pc = 0x3b6874u;
    // NOP
label_3b6878:
    // 0x3b6878: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3b6878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3b687c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b687cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b6880: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6880u;
    {
        const bool branch_taken_0x3b6880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6880) {
            ctx->pc = 0x3B68A0u;
            goto label_3b68a0;
        }
    }
    ctx->pc = 0x3B6888u;
    // 0x3b6888: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3b6888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b688c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6890: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3b6890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b6894: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6894u;
    {
        const bool branch_taken_0x3b6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6894u;
        // 0x3b6898: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6894) {
            ctx->pc = 0x3B68A8u;
            goto label_3b68a8;
        }
    }
    ctx->pc = 0x3B689Cu;
    // 0x3b689c: 0x0  nop
    ctx->pc = 0x3b689cu;
    // NOP
label_3b68a0:
    // 0x3b68a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b68a4: 0x0  nop
    ctx->pc = 0x3b68a4u;
    // NOP
label_3b68a8:
    // 0x3b68a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B68A8u;
    {
        const bool branch_taken_0x3b68a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68A8u;
        // 0x3b68ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b68a8) {
            ctx->pc = 0x3B68B8u;
            goto label_3b68b8;
        }
    }
    ctx->pc = 0x3B68B0u;
    // 0x3b68b0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B68B0u;
    SET_GPR_U32(ctx, 31, 0x3B68B8u);
    ctx->pc = 0x3B68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B68B0u;
    // 0x3b68b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B68B0u, 0x3B68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B68B8u;
label_3b68b8:
    // 0x3b68b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b68b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b68bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b68bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b68c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B68C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B68C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B68C0u;
        // 0x3b68c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B68C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B68C8u;
}
