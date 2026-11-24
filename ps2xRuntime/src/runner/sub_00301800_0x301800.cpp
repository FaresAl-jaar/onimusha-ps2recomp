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

// Function: sub_00301800
// Address: 0x301800 - 0x3019e0
void sub_00301800_0x301800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301800_0x301800");
#endif

    switch (ctx->pc) {
        case 0x301848u: goto label_301848;
        case 0x30189cu: goto label_30189c;
        case 0x3018acu: goto label_3018ac;
        case 0x3018bcu: goto label_3018bc;
        case 0x301918u: goto label_301918;
        case 0x301928u: goto label_301928;
        case 0x3019d0u: goto label_3019d0;
        default: break;
    }

    ctx->pc = 0x301800u;

    // 0x301800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x301800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x301804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x301804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x301808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x301808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30180c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301810: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x301810u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x301814: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x301814u;
    {
        const bool branch_taken_0x301814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x301818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301814u;
        // 0x301818: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301814) {
            ctx->pc = 0x301878u;
            goto label_301878;
        }
    }
    ctx->pc = 0x30181Cu;
    // 0x30181c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30181cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301820: 0x10c3000d  beq         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x301820u;
    {
        const bool branch_taken_0x301820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x301820) {
            ctx->pc = 0x301858u;
            goto label_301858;
        }
    }
    ctx->pc = 0x301828u;
    // 0x301828: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x301828u;
    {
        const bool branch_taken_0x301828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x301828) {
            ctx->pc = 0x301838u;
            goto label_301838;
        }
    }
    ctx->pc = 0x301830u;
    // 0x301830: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x301830u;
    {
        const bool branch_taken_0x301830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301830) {
            ctx->pc = 0x3019D0u;
            goto label_3019d0;
        }
    }
    ctx->pc = 0x301838u;
label_301838:
    // 0x301838: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x301838u;
    {
        const bool branch_taken_0x301838 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x301838) {
            ctx->pc = 0x301848u;
            goto label_301848;
        }
    }
    ctx->pc = 0x301840u;
    // 0x301840: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x301840u;
    SET_GPR_U32(ctx, 31, 0x301848u);
    ctx->pc = 0x301844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301840u;
    // 0x301844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301840u, 0x301848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301848u;
label_301848:
    // 0x301848: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x301848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x30184c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30184cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x301850: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x301850u;
    {
        const bool branch_taken_0x301850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301850u;
        // 0x301854: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301850) {
            ctx->pc = 0x3019D0u;
            goto label_3019d0;
        }
    }
    ctx->pc = 0x301858u;
label_301858:
    // 0x301858: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x301858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x30185c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x30185cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x301860: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x301860u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x301864: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x301864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x301868: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x301868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x30186c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x30186cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x301870: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x301870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x301874: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x301874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_301878:
    // 0x301878: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x301878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x30187c: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x30187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x301880: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x301880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x301884: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x301884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x301888: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x301888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x30188c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x301890: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301894: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x301894u;
    SET_GPR_U32(ctx, 31, 0x30189Cu);
    ctx->pc = 0x301898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301894u;
    // 0x301898: 0x260600a0  addiu       $a2, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x301894u, 0x30189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30189Cu;
label_30189c:
    // 0x30189c: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x30189cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3018a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018a4: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3018A4u;
    SET_GPR_U32(ctx, 31, 0x3018ACu);
    ctx->pc = 0x3018A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018A4u;
    // 0x3018a8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3018A4u, 0x3018ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018ACu;
label_3018ac:
    // 0x3018ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3018ACu;
    {
        const bool branch_taken_0x3018ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3018B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018ACu;
        // 0x3018b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018ac) {
            ctx->pc = 0x3018C0u;
            goto label_3018c0;
        }
    }
    ctx->pc = 0x3018B4u;
    // 0x3018b4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3018B4u;
    SET_GPR_U32(ctx, 31, 0x3018BCu);
    ctx->pc = 0x3018B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018B4u;
    // 0x3018b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3018B4u, 0x3018BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018BCu;
label_3018bc:
    // 0x3018bc: 0x0  nop
    ctx->pc = 0x3018bcu;
    // NOP
label_3018c0:
    // 0x3018c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3018c4: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3018c4u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3018c8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x3018c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3018cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018d0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3018d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3018d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3018d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3018d8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3018d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3018dc: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x3018dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x3018e0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3018e0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3018e4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3018e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3018e8: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x3018e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x3018ec: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3018ecu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3018f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3018f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3018f4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3018f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3018f8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3018f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3018fc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3018fcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301900: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x301900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x301904: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x301904u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x301908: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x301908u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x30190c: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x30190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301910: 0xc0c0900  jal         func_302400
    ctx->pc = 0x301910u;
    SET_GPR_U32(ctx, 31, 0x301918u);
    ctx->pc = 0x301914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301910u;
    // 0x301914: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x301910u, 0x301918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301918u;
label_301918:
    // 0x301918: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301918u;
    {
        const bool branch_taken_0x301918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301918u;
        // 0x30191c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301918) {
            ctx->pc = 0x301928u;
            goto label_301928;
        }
    }
    ctx->pc = 0x301920u;
    // 0x301920: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x301920u;
    SET_GPR_U32(ctx, 31, 0x301928u);
    ctx->pc = 0x301924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301920u;
    // 0x301924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x301920u, 0x301928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301928u;
label_301928:
    // 0x301928: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x301928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x30192c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30192Cu;
    {
        const bool branch_taken_0x30192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30192Cu;
        // 0x301930: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30192c) {
            ctx->pc = 0x301940u;
            goto label_301940;
        }
    }
    ctx->pc = 0x301934u;
    // 0x301934: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x301934u;
    {
        const bool branch_taken_0x301934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301934) {
            ctx->pc = 0x3019C0u;
            goto label_3019c0;
        }
    }
    ctx->pc = 0x30193Cu;
    // 0x30193c: 0x0  nop
    ctx->pc = 0x30193cu;
    // NOP
label_301940:
    // 0x301940: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x301940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301944: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x301944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x301948: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x301948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30194c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x30194cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x301950: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x301950u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x301954: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x301954u;
    {
        const bool branch_taken_0x301954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x301954) {
            ctx->pc = 0x301990u;
            goto label_301990;
        }
    }
    ctx->pc = 0x30195Cu;
    // 0x30195c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x30195cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301960: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x301960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x301964: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x301964u;
    {
        const bool branch_taken_0x301964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301964u;
        // 0x301968: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301964) {
            ctx->pc = 0x3019B8u;
            goto label_3019b8;
        }
    }
    ctx->pc = 0x30196Cu;
    // 0x30196c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30196cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301970: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x301970u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x301974: 0x0  nop
    ctx->pc = 0x301974u;
    // NOP
    // 0x301978: 0x0  nop
    ctx->pc = 0x301978u;
    // NOP
    // 0x30197c: 0x2010  mfhi        $a0
    ctx->pc = 0x30197cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x301980: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x301980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x301984: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x301984u;
    {
        const bool branch_taken_0x301984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301984u;
        // 0x301988: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301984) {
            ctx->pc = 0x3019B8u;
            goto label_3019b8;
        }
    }
    ctx->pc = 0x30198Cu;
    // 0x30198c: 0x0  nop
    ctx->pc = 0x30198cu;
    // NOP
label_301990:
    // 0x301990: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x301990u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x301994: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x301994u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x301998: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x301998u;
    {
        const bool branch_taken_0x301998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301998) {
            ctx->pc = 0x3019B8u;
            goto label_3019b8;
        }
    }
    ctx->pc = 0x3019A0u;
    // 0x3019a0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3019a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3019a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3019a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3019a8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3019a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3019ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3019ACu;
    {
        const bool branch_taken_0x3019ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3019B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019ACu;
        // 0x3019b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3019ac) {
            ctx->pc = 0x3019C0u;
            goto label_3019c0;
        }
    }
    ctx->pc = 0x3019B4u;
    // 0x3019b4: 0x0  nop
    ctx->pc = 0x3019b4u;
    // NOP
label_3019b8:
    // 0x3019b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3019b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3019bc: 0x0  nop
    ctx->pc = 0x3019bcu;
    // NOP
label_3019c0:
    // 0x3019c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3019C0u;
    {
        const bool branch_taken_0x3019c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3019C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019C0u;
        // 0x3019c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3019c0) {
            ctx->pc = 0x3019D0u;
            goto label_3019d0;
        }
    }
    ctx->pc = 0x3019C8u;
    // 0x3019c8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3019C8u;
    SET_GPR_U32(ctx, 31, 0x3019D0u);
    ctx->pc = 0x3019CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019C8u;
    // 0x3019cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3019C8u, 0x3019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019D0u;
label_3019d0:
    // 0x3019d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3019d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3019d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3019d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3019d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3019D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3019DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3019D8u;
        // 0x3019dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3019D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3019E0u;
}
