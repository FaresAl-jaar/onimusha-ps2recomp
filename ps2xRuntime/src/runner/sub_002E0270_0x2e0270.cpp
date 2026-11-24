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

// Function: sub_002E0270
// Address: 0x2e0270 - 0x2e0630
void sub_002E0270_0x2e0270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0270_0x2e0270");
#endif

    switch (ctx->pc) {
        case 0x2e02c4u: goto label_2e02c4;
        case 0x2e030cu: goto label_2e030c;
        case 0x2e0320u: goto label_2e0320;
        case 0x2e0334u: goto label_2e0334;
        case 0x2e0350u: goto label_2e0350;
        case 0x2e0370u: goto label_2e0370;
        case 0x2e03c0u: goto label_2e03c0;
        case 0x2e0448u: goto label_2e0448;
        case 0x2e0458u: goto label_2e0458;
        case 0x2e04a4u: goto label_2e04a4;
        case 0x2e056cu: goto label_2e056c;
        case 0x2e05c0u: goto label_2e05c0;
        case 0x2e05e4u: goto label_2e05e4;
        case 0x2e0600u: goto label_2e0600;
        default: break;
    }

    ctx->pc = 0x2e0270u;

    // 0x2e0270: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2e0270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2e0274: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2e0274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2e0278: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e0278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e027c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x2e027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2e0280: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e0280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e0284: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e0284u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e0288: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e0288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e028c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e028cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e0290: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e0290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e0294: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e0294u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0298: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e0298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e029c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e029cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e02a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e02a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e02a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e02a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e02a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e02ac: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e02acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2e02b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e02b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e02b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e02b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e02b8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x2e02b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e02bc: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2E02BCu;
    SET_GPR_U32(ctx, 31, 0x2E02C4u);
    ctx->pc = 0x2E02C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02BCu;
    // 0x2e02c0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2E02BCu, 0x2E02C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02C4u;
label_2e02c4:
    // 0x2e02c4: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2e02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2e02c8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e02c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e02cc: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2e02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x2e02d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2e02d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2e02d4: 0x92a660b3  lbu         $a2, 0x60B3($s5)
    ctx->pc = 0x2e02d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e02d8: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2e02d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2e02dc: 0x24427a91  addiu       $v0, $v0, 0x7A91
    ctx->pc = 0x2e02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31377));
    // 0x2e02e0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e02e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e02e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e02e8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2e02e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e02ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e02ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2e02f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2e02f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e02f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e02f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e02fc: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2e02fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e0300: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2e0300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0304: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2E0304u;
    SET_GPR_U32(ctx, 31, 0x2E030Cu);
    ctx->pc = 0x2E0308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0304u;
    // 0x2e0308: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2E0304u, 0x2E030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E030Cu;
label_2e030c:
    // 0x2e030c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2e030cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2e0310: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2e0310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e0314: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x2e0314u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x2e0318: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E0318u;
    SET_GPR_U32(ctx, 31, 0x2E0320u);
    ctx->pc = 0x2E031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0318u;
    // 0x2e031c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E0318u, 0x2E0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0320u;
label_2e0320:
    // 0x2e0320: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e0320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0324: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2e0324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2e0328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e032c: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2E032Cu;
    SET_GPR_U32(ctx, 31, 0x2E0334u);
    ctx->pc = 0x2E0330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E032Cu;
    // 0x2e0330: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2E032Cu, 0x2E0334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0334u;
label_2e0334:
    // 0x2e0334: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e0334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0338: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e0338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e033c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0340: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e0340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e0344: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2e0344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e0348: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E0348u;
    SET_GPR_U32(ctx, 31, 0x2E0350u);
    ctx->pc = 0x2E034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0348u;
    // 0x2e034c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E0348u, 0x2E0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0350u;
label_2e0350:
    // 0x2e0350: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e0354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e0358: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e0358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2e035c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2e035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e0360: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e0360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0364: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2e0364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e0368: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x2E0368u;
    SET_GPR_U32(ctx, 31, 0x2E0370u);
    ctx->pc = 0x2E036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0368u;
    // 0x2e036c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x2E0368u, 0x2E0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0370u;
label_2e0370:
    // 0x2e0370: 0x92a560b3  lbu         $a1, 0x60B3($s5)
    ctx->pc = 0x2e0370u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e0374: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e0374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e0378: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2e0378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2e037c: 0x24637aa0  addiu       $v1, $v1, 0x7AA0
    ctx->pc = 0x2e037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31392));
    // 0x2e0380: 0x24427aa4  addiu       $v0, $v0, 0x7AA4
    ctx->pc = 0x2e0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31396));
    // 0x2e0384: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2e0384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e0388: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e0388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e038c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e038cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e0390: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0394: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e0394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e0398: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e0398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e039c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e03a0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e03a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e03a4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2e03a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e03a8: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x2E03A8u;
    {
        const bool branch_taken_0x2e03a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E03A8u;
        // 0x2e03ac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03a8) {
            ctx->pc = 0x2E05B8u;
            goto label_2e05b8;
        }
    }
    ctx->pc = 0x2E03B0u;
    // 0x2e03b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e03b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2e03b4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2e03b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e03b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e03bc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2e03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2e03c0:
    // 0x2e03c0: 0x922200c8  lbu         $v0, 0xC8($s1)
    ctx->pc = 0x2e03c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2e03c4: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2E03C4u;
    {
        const bool branch_taken_0x2e03c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e03c4) {
            ctx->pc = 0x2E0580u;
            goto label_2e0580;
        }
    }
    ctx->pc = 0x2E03CCu;
    // 0x2e03cc: 0xc62200b4  lwc1        $f2, 0xB4($s1)
    ctx->pc = 0x2e03ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e03d0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2e03d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2e03d4: 0x24a57a90  addiu       $a1, $a1, 0x7A90
    ctx->pc = 0x2e03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31376));
    // 0x2e03d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e03dc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e03e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e03e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e03e4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e03e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e03e8: 0x26300070  addiu       $s0, $s1, 0x70
    ctx->pc = 0x2e03e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e03ec: 0xc62000c0  lwc1        $f0, 0xC0($s1)
    ctx->pc = 0x2e03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e03f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e03f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e03f4: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2e03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2e03f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e03f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e03fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e03fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e0400: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2e0400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e0404: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x2e0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0408: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e0408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e040c: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x2e040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0410: 0x92a460b3  lbu         $a0, 0x60B3($s5)
    ctx->pc = 0x2e0410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e0414: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x2e0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0418: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2e0418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e041c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2e041cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e0420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e0420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e0424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e0424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0428: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e0428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e042c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2e042cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0430: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e0430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e0434: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x2e0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x2e0438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e0438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e043c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e0440: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x2e0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x2e0444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e0444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e0448:
    // 0x2e0448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e044c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e0450: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x2E0450u;
    SET_GPR_U32(ctx, 31, 0x2E0458u);
    ctx->pc = 0x2E0454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0450u;
    // 0x2e0454: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x2E0450u, 0x2E0458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0458u;
label_2e0458:
    // 0x2e0458: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e0458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e045c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e045cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e0460: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x2e0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2e0464: 0x8fb60100  lw          $s6, 0x100($sp)
    ctx->pc = 0x2e0464u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e0468: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2e0468u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e046c: 0x24637a90  addiu       $v1, $v1, 0x7A90
    ctx->pc = 0x2e046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31376));
    // 0x2e0470: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2e0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e0474: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2e0474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2e0478: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x2e0478u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e047c: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x2e047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x2e0480: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0484: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e0484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2e0488: 0x92a560b3  lbu         $a1, 0x60B3($s5)
    ctx->pc = 0x2e0488u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e048c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2e048cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2e0490: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e0490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e0494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e0494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e0498: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e0498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e049c: 0xc078e98  jal         func_1E3A60
    ctx->pc = 0x2E049Cu;
    SET_GPR_U32(ctx, 31, 0x2E04A4u);
    ctx->pc = 0x2E04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E049Cu;
    // 0x2e04a0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A60u, 0x2E049Cu, 0x2E04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04A4u;
label_2e04a4:
    // 0x2e04a4: 0x92ab60b3  lbu         $t3, 0x60B3($s5)
    ctx->pc = 0x2e04a4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e04a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2e04a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2e04ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e04acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e04b0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2e04b4: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2e04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2e04b8: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x2e04b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e04bc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2e04bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2e04c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e04c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04c4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2e04c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04c8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e04c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04cc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e04d0: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x2e04d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2e04d4: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x2e04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2e04d8: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2e04d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e04dc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2e04dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2e04e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e04e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2e04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e04e8: 0x8c6b002c  lw          $t3, 0x2C($v1)
    ctx->pc = 0x2e04e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2e04ec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2e04ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e04f0: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2e04f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e04f4: 0x35a03  sra         $t3, $v1, 8
    ctx->pc = 0x2e04f4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2e04f8: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2e04fc: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x2e04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x2e0500: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2e0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0504: 0x27a300e4  addiu       $v1, $sp, 0xE4
    ctx->pc = 0x2e0504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2e0508: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e0508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2e050c: 0x864d0008  lh          $t5, 0x8($s2)
    ctx->pc = 0x2e050cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2e0510: 0x864c000a  lh          $t4, 0xA($s2)
    ctx->pc = 0x2e0510u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2e0514: 0x92af60b3  lbu         $t7, 0x60B3($s5)
    ctx->pc = 0x2e0514u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e0518: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x2e0518u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e051c: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2e0520: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x2e0520u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e0524: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x2e0524u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0528: 0x0  nop
    ctx->pc = 0x2e0528u;
    // NOP
    // 0x2e052c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e052cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e0530: 0xf7040  sll         $t6, $t7, 1
    ctx->pc = 0x2e0530u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x2e0534: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x2e0534u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x2e0538: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x2e0538u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x2e053c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x2e053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2e0540: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x2e0540u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2e0544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e0544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e0548: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x2e0548u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e054c: 0x0  nop
    ctx->pc = 0x2e054cu;
    // NOP
    // 0x2e0550: 0x46020b43  div.s       $f13, $f1, $f2
    ctx->pc = 0x2e0550u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2e0554: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x2e0554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x2e0558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e0558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e055c: 0xc4510004  lwc1        $f17, 0x4($v0)
    ctx->pc = 0x2e055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2e0560: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x2e0560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2e0564: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x2E0564u;
    SET_GPR_U32(ctx, 31, 0x2E056Cu);
    ctx->pc = 0x2E0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0564u;
    // 0x2e0568: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x2E0564u, 0x2E056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E056Cu;
label_2e056c:
    // 0x2e056c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e056cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e0570: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x2e0570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e0574: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2E0574u;
    {
        const bool branch_taken_0x2e0574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0574u;
        // 0x2e0578: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0574) {
            ctx->pc = 0x2E0448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0448;
        }
    }
    ctx->pc = 0x2E057Cu;
    // 0x2e057c: 0x0  nop
    ctx->pc = 0x2e057cu;
    // NOP
label_2e0580:
    // 0x2e0580: 0x92a460b3  lbu         $a0, 0x60B3($s5)
    ctx->pc = 0x2e0580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 24755)));
    // 0x2e0584: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2e0584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2e0588: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e0588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e058c: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2e058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2e0590: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e0590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e0594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e0594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0598: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e0598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e059c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e05a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2e05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e05a4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e05a8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2e05a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e05ac: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2e05acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e05b0: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2E05B0u;
    {
        const bool branch_taken_0x2e05b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05B0u;
        // 0x2e05b4: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05b0) {
            ctx->pc = 0x2E03C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e03c0;
        }
    }
    ctx->pc = 0x2E05B8u;
label_2e05b8:
    // 0x2e05b8: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x2E05B8u;
    SET_GPR_U32(ctx, 31, 0x2E05C0u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x2E05B8u, 0x2E05C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05C0u;
label_2e05c0:
    // 0x2e05c0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e05c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e05c8: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2e05cc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e05d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E05D0u;
    {
        const bool branch_taken_0x2e05d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e05d0) {
            ctx->pc = 0x2E0600u;
            goto label_2e0600;
        }
    }
    ctx->pc = 0x2E05D8u;
    // 0x2e05d8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2e05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e05dc: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2E05DCu;
    SET_GPR_U32(ctx, 31, 0x2E05E4u);
    ctx->pc = 0x2E05E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05DCu;
    // 0x2e05e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2E05DCu, 0x2E05E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05E4u;
label_2e05e4:
    // 0x2e05e4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2e05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e05e8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2e05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e05ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e05ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e05f0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x2e05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x2e05f4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e05f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e05f8: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2E05F8u;
    SET_GPR_U32(ctx, 31, 0x2E0600u);
    ctx->pc = 0x2E05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05F8u;
    // 0x2e05fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2E05F8u, 0x2E0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0600u;
label_2e0600:
    // 0x2e0600: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e0600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e0604: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e0604u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e0608: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e0608u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e060c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e060cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0610: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e0610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e061c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e061cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0628: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0628u;
        // 0x2e062c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0630u;
}
