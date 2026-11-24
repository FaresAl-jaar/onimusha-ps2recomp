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

// Function: sub_003685D0
// Address: 0x3685d0 - 0x368808
void sub_003685D0_0x3685d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003685D0_0x3685d0");
#endif

    switch (ctx->pc) {
        case 0x368688u: goto label_368688;
        case 0x3686a0u: goto label_3686a0;
        case 0x3686b4u: goto label_3686b4;
        case 0x3686c0u: goto label_3686c0;
        case 0x3686e8u: goto label_3686e8;
        case 0x368728u: goto label_368728;
        case 0x368748u: goto label_368748;
        case 0x368780u: goto label_368780;
        case 0x3687a0u: goto label_3687a0;
        case 0x3687c4u: goto label_3687c4;
        default: break;
    }

    ctx->pc = 0x3685d0u;

    // 0x3685d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3685d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3685d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3685d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3685d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3685d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3685dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3685dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3685e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3685e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3685e4: 0x3c17004e  lui         $s7, 0x4E
    ctx->pc = 0x3685e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)78 << 16));
    // 0x3685e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3685e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3685ec: 0x26f76bd4  addiu       $s7, $s7, 0x6BD4
    ctx->pc = 0x3685ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 27604));
    // 0x3685f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3685f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3685f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3685f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3685f8: 0x3c14004e  lui         $s4, 0x4E
    ctx->pc = 0x3685f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    // 0x3685fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3685fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368600: 0x26946bc8  addiu       $s4, $s4, 0x6BC8
    ctx->pc = 0x368600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27592));
    // 0x368604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x368608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36860c: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x36860cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6BD0u));
    // 0x368610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368614: 0x86e20008  lh          $v0, 0x8($s7)
    ctx->pc = 0x368614u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6BDCu));
    // 0x368618: 0x261500a8  addiu       $s5, $s0, 0xA8
    ctx->pc = 0x368618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x36861c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x36861cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x368620: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368620u;
    {
        const bool branch_taken_0x368620 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x368624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368620u;
        // 0x368624: 0x112043  sra         $a0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368620) {
            ctx->pc = 0x368630u;
            goto label_368630;
        }
    }
    ctx->pc = 0x368628u;
    // 0x368628: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x368628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36862c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x36862cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_368630:
    // 0x368630: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x368630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x368634: 0x8683000a  lh          $v1, 0xA($s4)
    ctx->pc = 0x368634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x368638: 0x44b023  subu        $s6, $v0, $a0
    ctx->pc = 0x368638u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x36863c: 0x8ea20068  lw          $v0, 0x68($s5)
    ctx->pc = 0x36863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x368640: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x368640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x368644: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x368644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x368648: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x368648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x36864c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36864Cu;
    {
        const bool branch_taken_0x36864c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x368650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36864Cu;
        // 0x368650: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36864c) {
            ctx->pc = 0x36865Cu;
            goto label_36865c;
        }
    }
    ctx->pc = 0x368654u;
    // 0x368654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368658: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x368658u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_36865c:
    // 0x36865c: 0x82a30001  lb          $v1, 0x1($s5)
    ctx->pc = 0x36865cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x368660: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x368660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x368664: 0x449023  subu        $s2, $v0, $a0
    ctx->pc = 0x368664u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x368668: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x368668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x36866c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x36866cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x368670: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x368670u;
    {
        const bool branch_taken_0x368670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368670u;
        // 0x368674: 0x243f021  addu        $fp, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368670) {
            ctx->pc = 0x3686A8u;
            goto label_3686a8;
        }
    }
    ctx->pc = 0x368678u;
    // 0x368678: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x368678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x36867c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36867cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368680: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x368680u;
    SET_GPR_U32(ctx, 31, 0x368688u);
    ctx->pc = 0x368684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368680u;
    // 0x368684: 0xa2a00004  sb          $zero, 0x4($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x368680u, 0x368688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368688u;
label_368688:
    // 0x368688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36868c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x36868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x368690: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x368690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368694: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x368694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x368698: 0xc0dc688  jal         func_371A20
    ctx->pc = 0x368698u;
    SET_GPR_U32(ctx, 31, 0x3686A0u);
    ctx->pc = 0x36869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368698u;
    // 0x36869c: 0x24080013  addiu       $t0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371A20u, 0x368698u, 0x3686A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686A0u;
label_3686a0:
    // 0x3686a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3686A0u;
    {
        const bool branch_taken_0x3686a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3686a0) {
            ctx->pc = 0x3686B8u;
            goto label_3686b8;
        }
    }
    ctx->pc = 0x3686A8u;
label_3686a8:
    // 0x3686a8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x3686a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x3686ac: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3686ACu;
    SET_GPR_U32(ctx, 31, 0x3686B4u);
    ctx->pc = 0x3686B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686ACu;
    // 0x3686b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3686ACu, 0x3686B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686B4u;
label_3686b4:
    // 0x3686b4: 0x0  nop
    ctx->pc = 0x3686b4u;
    // NOP
label_3686b8:
    // 0x3686b8: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x3686B8u;
    SET_GPR_U32(ctx, 31, 0x3686C0u);
    ctx->pc = 0x3686BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686B8u;
    // 0x3686bc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x3686B8u, 0x3686C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686C0u;
label_3686c0:
    // 0x3686c0: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x3686c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x3686c4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3686c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3686c8: 0x8e0a005c  lw          $t2, 0x5C($s0)
    ctx->pc = 0x3686c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3686cc: 0x26280006  addiu       $t0, $s1, 0x6
    ctx->pc = 0x3686ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x3686d0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3686d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686d4: 0x26c5fffe  addiu       $a1, $s6, -0x2
    ctx->pc = 0x3686d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
    // 0x3686d8: 0x24847078  addiu       $a0, $a0, 0x7078
    ctx->pc = 0x3686d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28792));
    // 0x3686dc: 0x3407fff9  ori         $a3, $zero, 0xFFF9
    ctx->pc = 0x3686dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x3686e0: 0xc09c844  jal         func_272110
    ctx->pc = 0x3686E0u;
    SET_GPR_U32(ctx, 31, 0x3686E8u);
    ctx->pc = 0x3686E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686E0u;
    // 0x3686e4: 0x24490004  addiu       $t1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x3686E0u, 0x3686E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686E8u;
label_3686e8:
    // 0x3686e8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3686e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3686ec: 0x27be00aa  addiu       $fp, $sp, 0xAA
    ctx->pc = 0x3686ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 170));
    // 0x3686f0: 0xa7a300a8  sh          $v1, 0xA8($sp)
    ctx->pc = 0x3686f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x3686f4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3686f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3686f8: 0xa7d20000  sh          $s2, 0x0($fp)
    ctx->pc = 0x3686f8u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x3686fc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3686fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x368700: 0xa3a400ad  sb          $a0, 0xAD($sp)
    ctx->pc = 0x368700u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 173), (uint8_t)GPR_U32(ctx, 4));
    // 0x368704: 0xa3a000ac  sb          $zero, 0xAC($sp)
    ctx->pc = 0x368704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x368708: 0xa3a300ae  sb          $v1, 0xAE($sp)
    ctx->pc = 0x368708u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 174), (uint8_t)GPR_U32(ctx, 3));
    // 0x36870c: 0xa3a300af  sb          $v1, 0xAF($sp)
    ctx->pc = 0x36870cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 3));
    // 0x368710: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x368710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x368714: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x368714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x368718: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x368718u;
    {
        const bool branch_taken_0x368718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368718u;
        // 0x36871c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368718) {
            ctx->pc = 0x368770u;
            goto label_368770;
        }
    }
    ctx->pc = 0x368720u;
    // 0x368720: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x368720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368724: 0x0  nop
    ctx->pc = 0x368724u;
    // NOP
label_368728:
    // 0x368728: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x368728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36872c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36872cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x368730: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x368730u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x368734: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x368734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x368738: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x368738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x36873c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x36873cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x368740: 0xc095fc4  jal         func_257F10
    ctx->pc = 0x368740u;
    SET_GPR_U32(ctx, 31, 0x368748u);
    ctx->pc = 0x368744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368740u;
    // 0x368744: 0x24e71890  addiu       $a3, $a3, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F10u, 0x368740u, 0x368748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368748u;
label_368748:
    // 0x368748: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x368748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x36874c: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x36874cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x368750: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x368750u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x368754: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x368754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x368758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x368758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36875c: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x36875cu;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x368760: 0x8ea40068  lw          $a0, 0x68($s5)
    ctx->pc = 0x368760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x368764: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x368764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x368768: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x368768u;
    {
        const bool branch_taken_0x368768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368768u;
        // 0x36876c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368768) {
            ctx->pc = 0x368728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368728;
        }
    }
    ctx->pc = 0x368770u;
label_368770:
    // 0x368770: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x368770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x368774: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x368774u;
    {
        const bool branch_taken_0x368774 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x368778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368774u;
        // 0x368778: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368774) {
            ctx->pc = 0x3687D8u;
            goto label_3687d8;
        }
    }
    ctx->pc = 0x36877Cu;
    // 0x36877c: 0x0  nop
    ctx->pc = 0x36877cu;
    // NOP
label_368780:
    // 0x368780: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x368780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x368784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x368784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x368788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36878c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x36878cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368790: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x368790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368794: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x368794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x368798: 0xc09c618  jal         func_271860
    ctx->pc = 0x368798u;
    SET_GPR_U32(ctx, 31, 0x3687A0u);
    ctx->pc = 0x36879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368798u;
    // 0x36879c: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271860u, 0x368798u, 0x3687A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687A0u;
label_3687a0:
    // 0x3687a0: 0x86830008  lh          $v1, 0x8($s4)
    ctx->pc = 0x3687a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x3687a4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3687a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3687a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3687a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3687acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3687b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3687b4: 0x3408fff9  ori         $t0, $zero, 0xFFF9
    ctx->pc = 0x3687b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x3687b8: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x3687b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3687bc: 0xc09c618  jal         func_271860
    ctx->pc = 0x3687BCu;
    SET_GPR_U32(ctx, 31, 0x3687C4u);
    ctx->pc = 0x3687C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3687BCu;
    // 0x3687c0: 0x2c33021  addu        $a2, $s6, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271860u, 0x3687BCu, 0x3687C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3687C4u;
label_3687c4:
    // 0x3687c4: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x3687c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x3687c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3687c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3687cc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3687ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3687d0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3687D0u;
    {
        const bool branch_taken_0x3687d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3687D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3687D0u;
        // 0x3687d4: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3687d0) {
            ctx->pc = 0x368780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368780;
        }
    }
    ctx->pc = 0x3687D8u;
label_3687d8:
    // 0x3687d8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3687d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3687dc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3687dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3687e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3687e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3687e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3687e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3687e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3687e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3687ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3687ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3687f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3687f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3687f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3687f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3687f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3687f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3687fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3687fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368800: 0x3e00008  jr          $ra
    ctx->pc = 0x368800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368800u;
        // 0x368804: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368808u;
}
