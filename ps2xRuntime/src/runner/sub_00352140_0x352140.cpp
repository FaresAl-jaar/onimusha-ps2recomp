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

// Function: sub_00352140
// Address: 0x352140 - 0x3522b8
void sub_00352140_0x352140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352140_0x352140");
#endif

    switch (ctx->pc) {
        case 0x3521d0u: goto label_3521d0;
        case 0x3521e8u: goto label_3521e8;
        case 0x352234u: goto label_352234;
        case 0x35229cu: goto label_35229c;
        default: break;
    }

    ctx->pc = 0x352140u;

    // 0x352140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x352140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x352144: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x352144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x352148: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x352148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35214c: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x35214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x352150: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x352150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x352154: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x352154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x352158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35215c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35215cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x352160: 0x6943c  dsll32      $s2, $a2, 16
    ctx->pc = 0x352160u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) << (32 + 16));
    // 0x352164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x352164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x352168: 0x58c3c  dsll32      $s1, $a1, 16
    ctx->pc = 0x352168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 16));
    // 0x35216c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x35216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352170: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x352170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352174: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x352174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x352178: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x352178u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x35217c: 0x842385a8  lh          $v1, -0x7A58($at)
    ctx->pc = 0x35217cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294935976)));
    // 0x352180: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x352180u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x352184: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x352184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x352188: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x352188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x35218c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35218cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x352190: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x352190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x352194: 0x842285aa  lh          $v0, -0x7A56($at)
    ctx->pc = 0x352194u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6585AAu));
    // 0x352198: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x352198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35219c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35219cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3521a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3521a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3521a4: 0x902785ac  lbu         $a3, -0x7A54($at)
    ctx->pc = 0x3521a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x6585ACu));
    // 0x3521a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3521ac: 0x902885ad  lbu         $t0, -0x7A53($at)
    ctx->pc = 0x3521acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x6585ADu));
    // 0x3521b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3521b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3521b4: 0x902985ae  lbu         $t1, -0x7A52($at)
    ctx->pc = 0x3521b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)FAST_READ8(0x6585AEu));
    // 0x3521b8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3521b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3521bc: 0x902a85af  lbu         $t2, -0x7A51($at)
    ctx->pc = 0x3521bcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)FAST_READ8(0x6585AFu));
    // 0x3521c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3521c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3521c4: 0x902b85b0  lbu         $t3, -0x7A50($at)
    ctx->pc = 0x3521c4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x6585B0u));
    // 0x3521c8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3521C8u;
    SET_GPR_U32(ctx, 31, 0x3521D0u);
    ctx->pc = 0x3521CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3521C8u;
    // 0x3521cc: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3521C8u, 0x3521D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521D0u;
label_3521d0:
    // 0x3521d0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3521D0u;
    {
        const bool branch_taken_0x3521d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3521d0) {
            ctx->pc = 0x352248u;
            goto label_352248;
        }
    }
    ctx->pc = 0x3521D8u;
    // 0x3521d8: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3521d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3521dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3521dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3521e0: 0x26108290  addiu       $s0, $s0, -0x7D70
    ctx->pc = 0x3521e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935184));
    // 0x3521e4: 0x0  nop
    ctx->pc = 0x3521e4u;
    // NOP
label_3521e8:
    // 0x3521e8: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x3521e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x3521ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3521ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3521f0: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x3521f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3521f4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3521f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3521f8: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x3521f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3521fc: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x352200: 0x920b0014  lbu         $t3, 0x14($s0)
    ctx->pc = 0x352200u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x352204: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x352204u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x352208: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x352208u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35220c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x35220cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352210: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x352210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x352214: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x352214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x352218: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x352218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35221c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x352220: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x352220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x352224: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x352224u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x352228: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x352228u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x35222c: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x35222Cu;
    SET_GPR_U32(ctx, 31, 0x352234u);
    ctx->pc = 0x352230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35222Cu;
    // 0x352230: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x35222Cu, 0x352234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352234u;
label_352234:
    // 0x352234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x352234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x352238: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x352238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35223c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35223Cu;
    {
        const bool branch_taken_0x35223c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x352240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35223Cu;
        // 0x352240: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35223c) {
            ctx->pc = 0x3521E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3521e8;
        }
    }
    ctx->pc = 0x352244u;
    // 0x352244: 0x0  nop
    ctx->pc = 0x352244u;
    // NOP
label_352248:
    // 0x352248: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x352248u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
    // 0x35224c: 0x254a82d8  addiu       $t2, $t2, -0x7D28
    ctx->pc = 0x35224cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935256));
    // 0x352250: 0x91420015  lbu         $v0, 0x15($t2)
    ctx->pc = 0x352250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6582EDu));
    // 0x352254: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x352254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x352258: 0x91420016  lbu         $v0, 0x16($t2)
    ctx->pc = 0x352258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6582EEu));
    // 0x35225c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x35225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x352260: 0x85430004  lh          $v1, 0x4($t2)
    ctx->pc = 0x352260u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x6582DCu));
    // 0x352264: 0x85420006  lh          $v0, 0x6($t2)
    ctx->pc = 0x352264u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x6582DEu));
    // 0x352268: 0x914b0014  lbu         $t3, 0x14($t2)
    ctx->pc = 0x352268u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)FAST_READ8(0x6582ECu));
    // 0x35226c: 0x85460008  lh          $a2, 0x8($t2)
    ctx->pc = 0x35226cu;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x6582E0u));
    // 0x352270: 0x8547000a  lh          $a3, 0xA($t2)
    ctx->pc = 0x352270u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x6582E2u));
    // 0x352274: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x352274u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6582D8u));
    // 0x352278: 0x8d49000c  lw          $t1, 0xC($t2)
    ctx->pc = 0x352278u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6582E4u));
    // 0x35227c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x35227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x352280: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x352280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x352284: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x352284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x352288: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x352288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35228c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x35228cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x352290: 0x8d4a0010  lw          $t2, 0x10($t2)
    ctx->pc = 0x352290u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x352294: 0xc0d471c  jal         func_351C70
    ctx->pc = 0x352294u;
    SET_GPR_U32(ctx, 31, 0x35229Cu);
    ctx->pc = 0x352298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352294u;
    // 0x352298: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C70u, 0x352294u, 0x35229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35229Cu;
label_35229c:
    // 0x35229c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35229cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3522a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3522a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3522a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3522a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3522a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3522a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3522ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3522acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3522b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3522B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3522B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522B0u;
        // 0x3522b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3522B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3522B8u;
}
