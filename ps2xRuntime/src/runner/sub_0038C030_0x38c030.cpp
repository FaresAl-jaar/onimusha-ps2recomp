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

// Function: sub_0038C030
// Address: 0x38c030 - 0x38c1ec
void sub_0038C030_0x38c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C030_0x38c030");
#endif

    switch (ctx->pc) {
        case 0x38c054u: goto label_38c054;
        case 0x38c078u: goto label_38c078;
        case 0x38c084u: goto label_38c084;
        case 0x38c0b4u: goto label_38c0b4;
        case 0x38c0c8u: goto label_38c0c8;
        case 0x38c0e0u: goto label_38c0e0;
        case 0x38c118u: goto label_38c118;
        case 0x38c150u: goto label_38c150;
        case 0x38c174u: goto label_38c174;
        case 0x38c194u: goto label_38c194;
        case 0x38c1b4u: goto label_38c1b4;
        case 0x38c1ccu: goto label_38c1cc;
        default: break;
    }

    ctx->pc = 0x38c030u;

    // 0x38c030: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x38c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x38c034: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38c034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38c038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38c03c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38c03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38c040: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38c040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38c048: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38c048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c04c: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38C04Cu;
    SET_GPR_U32(ctx, 31, 0x38C054u);
    ctx->pc = 0x38C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C04Cu;
    // 0x38c050: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38C04Cu, 0x38C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C054u;
label_38c054:
    // 0x38c054: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x38c054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x38c058: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38c058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x38c05c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x38c05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x38c060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c064: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x38c064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x38c068: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x38c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x38c06c: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x38c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x38c070: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38C070u;
    SET_GPR_U32(ctx, 31, 0x38C078u);
    ctx->pc = 0x38C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C070u;
    // 0x38c074: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38C070u, 0x38C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C078u;
label_38c078:
    // 0x38c078: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38c078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38c07c: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x38C07Cu;
    SET_GPR_U32(ctx, 31, 0x38C084u);
    ctx->pc = 0x38C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C07Cu;
    // 0x38c080: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x38C07Cu, 0x38C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C084u;
label_38c084:
    // 0x38c084: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38c084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c088: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x38c088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38c08c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38c090: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x38c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38c094: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x38c094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x38c098: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x38c098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38c09c: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x38c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
    // 0x38c0a0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x38c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x38c0a4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x38c0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38c0a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38c0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38c0ac: 0xc0c83cc  jal         func_320F30
    ctx->pc = 0x38C0ACu;
    SET_GPR_U32(ctx, 31, 0x38C0B4u);
    ctx->pc = 0x38C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0ACu;
    // 0x38c0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F30u, 0x38C0ACu, 0x38C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0B4u;
label_38c0b4:
    // 0x38c0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38c0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c0bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38c0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0c0: 0xc0c8020  jal         func_320080
    ctx->pc = 0x38C0C0u;
    SET_GPR_U32(ctx, 31, 0x38C0C8u);
    ctx->pc = 0x38C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0C0u;
    // 0x38c0c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320080u, 0x38C0C0u, 0x38C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0C8u;
label_38c0c8:
    // 0x38c0c8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38c0cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x38c0d0: 0x24a5bfc0  addiu       $a1, $a1, -0x4040
    ctx->pc = 0x38c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950848));
    // 0x38c0d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38c0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0d8: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38C0D8u;
    SET_GPR_U32(ctx, 31, 0x38C0E0u);
    ctx->pc = 0x38C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C0D8u;
    // 0x38c0dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38C0D8u, 0x38C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C0E0u;
label_38c0e0:
    // 0x38c0e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38c0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x38c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x38c0ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c0f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x38c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38c0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38c0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c0f8: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x38c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x38c0fc: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x38c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x38c100: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x38c100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x38c104: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x38c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x38c108: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x38c108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x38c10c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x38c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x38c110: 0xc0c8340  jal         func_320D00
    ctx->pc = 0x38C110u;
    SET_GPR_U32(ctx, 31, 0x38C118u);
    ctx->pc = 0x38C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C110u;
    // 0x38c114: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D00u, 0x38C110u, 0x38C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C118u;
label_38c118:
    // 0x38c118: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x38c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x38c11c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x38c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x38c120: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x38c120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x38c124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x38c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38c128: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x38c128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38c12c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x38c12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x38c130: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x38c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x38c134: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x38c134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x38c138: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x38c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x38c13c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x38c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x38c140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38c144: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x38c144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x38c148: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x38C148u;
    SET_GPR_U32(ctx, 31, 0x38C150u);
    ctx->pc = 0x38C14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C148u;
    // 0x38c14c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x38C148u, 0x38C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C150u;
label_38c150:
    // 0x38c150: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x38c150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x38c154: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x38c154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38c158: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x38c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x38c15c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x38c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38c160: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x38c160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x38c164: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x38c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x38c168: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x38c168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x38c16c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x38C16Cu;
    SET_GPR_U32(ctx, 31, 0x38C174u);
    ctx->pc = 0x38C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C16Cu;
    // 0x38c170: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x38C16Cu, 0x38C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C174u;
label_38c174:
    // 0x38c174: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x38c174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38c178: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x38c178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x38c17c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x38c17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38c180: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x38C180u;
    {
        const bool branch_taken_0x38c180 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C180u;
        // 0x38c184: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c180) {
            ctx->pc = 0x38C1A0u;
            goto label_38c1a0;
        }
    }
    ctx->pc = 0x38C188u;
    // 0x38c188: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x38c188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x38c18c: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x38C18Cu;
    SET_GPR_U32(ctx, 31, 0x38C194u);
    ctx->pc = 0x38C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C18Cu;
    // 0x38c190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x38C18Cu, 0x38C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C194u;
label_38c194:
    // 0x38c194: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38C194u;
    {
        const bool branch_taken_0x38c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c194) {
            ctx->pc = 0x38C1D0u;
            goto label_38c1d0;
        }
    }
    ctx->pc = 0x38C19Cu;
    // 0x38c19c: 0x0  nop
    ctx->pc = 0x38c19cu;
    // NOP
label_38c1a0:
    // 0x38c1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38c1a4: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C1A4u;
    {
        const bool branch_taken_0x38c1a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x38C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1A4u;
        // 0x38c1a8: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c1a4) {
            ctx->pc = 0x38C1C0u;
            goto label_38c1c0;
        }
    }
    ctx->pc = 0x38C1ACu;
    // 0x38c1ac: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x38C1ACu;
    SET_GPR_U32(ctx, 31, 0x38C1B4u);
    ctx->pc = 0x38C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1ACu;
    // 0x38c1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x38C1ACu, 0x38C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1B4u;
label_38c1b4:
    // 0x38c1b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38C1B4u;
    {
        const bool branch_taken_0x38c1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c1b4) {
            ctx->pc = 0x38C1D0u;
            goto label_38c1d0;
        }
    }
    ctx->pc = 0x38C1BCu;
    // 0x38c1bc: 0x0  nop
    ctx->pc = 0x38c1bcu;
    // NOP
label_38c1c0:
    // 0x38c1c0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x38c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x38c1c4: 0xc0d1744  jal         func_345D10
    ctx->pc = 0x38C1C4u;
    SET_GPR_U32(ctx, 31, 0x38C1CCu);
    ctx->pc = 0x38C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C1C4u;
    // 0x38c1c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345D10u, 0x38C1C4u, 0x38C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C1CCu;
label_38c1cc:
    // 0x38c1cc: 0x0  nop
    ctx->pc = 0x38c1ccu;
    // NOP
label_38c1d0:
    // 0x38c1d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38c1d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38c1d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38c1d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38c1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38c1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38c1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38C1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C1E4u;
        // 0x38c1e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C1ECu;
}
