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

// Function: sub_003C1110
// Address: 0x3c1110 - 0x3c131c
void sub_003C1110_0x3c1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1110_0x3c1110");
#endif

    switch (ctx->pc) {
        case 0x3c1148u: goto label_3c1148;
        case 0x3c1160u: goto label_3c1160;
        case 0x3c1170u: goto label_3c1170;
        case 0x3c1184u: goto label_3c1184;
        case 0x3c1194u: goto label_3c1194;
        case 0x3c11b4u: goto label_3c11b4;
        case 0x3c11e0u: goto label_3c11e0;
        case 0x3c1214u: goto label_3c1214;
        case 0x3c1248u: goto label_3c1248;
        case 0x3c1280u: goto label_3c1280;
        case 0x3c1298u: goto label_3c1298;
        case 0x3c12e4u: goto label_3c12e4;
        case 0x3c12fcu: goto label_3c12fc;
        default: break;
    }

    ctx->pc = 0x3c1110u;

    // 0x3c1110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c1114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c1118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c1118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c111c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c1120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c1124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c1124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1128: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3c1128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c112c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C112Cu;
    {
        const bool branch_taken_0x3c112c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C112Cu;
        // 0x3c1130: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c112c) {
            ctx->pc = 0x3C1140u;
            goto label_3c1140;
        }
    }
    ctx->pc = 0x3C1134u;
    // 0x3c1134: 0x14830074  bne         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3C1134u;
    {
        const bool branch_taken_0x3c1134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c1134) {
            ctx->pc = 0x3C1308u;
            goto label_3c1308;
        }
    }
    ctx->pc = 0x3C113Cu;
    // 0x3c113c: 0x0  nop
    ctx->pc = 0x3c113cu;
    // NOP
label_3c1140:
    // 0x3c1140: 0xc0f042c  jal         func_3C10B0
    ctx->pc = 0x3C1140u;
    SET_GPR_U32(ctx, 31, 0x3C1148u);
    ctx->pc = 0x3C1144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1140u;
    // 0x3c1144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C10B0u, 0x3C1140u, 0x3C1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1148u;
label_3c1148:
    // 0x3c1148: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x3c1148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c114c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3c1150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c1154: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c1154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1158: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C1158u;
    SET_GPR_U32(ctx, 31, 0x3C1160u);
    ctx->pc = 0x3C115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1158u;
    // 0x3c115c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C1158u, 0x3C1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1160u;
label_3c1160:
    // 0x3c1160: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3c1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3c1164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c1164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1168: 0xc049590  jal         func_125640
    ctx->pc = 0x3C1168u;
    SET_GPR_U32(ctx, 31, 0x3C1170u);
    ctx->pc = 0x3C116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1168u;
    // 0x3c116c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C1168u, 0x3C1170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1170u;
label_3c1170:
    // 0x3c1170: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c1170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3c1174: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c1174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c1178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c1178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c117c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C117Cu;
    SET_GPR_U32(ctx, 31, 0x3C1184u);
    ctx->pc = 0x3C1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C117Cu;
    // 0x3c1180: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C117Cu, 0x3C1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1184u;
label_3c1184:
    // 0x3c1184: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x3c1184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3c1188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c1188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c118c: 0xc049590  jal         func_125640
    ctx->pc = 0x3C118Cu;
    SET_GPR_U32(ctx, 31, 0x3C1194u);
    ctx->pc = 0x3C1190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C118Cu;
    // 0x3c1190: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C118Cu, 0x3C1194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1194u;
label_3c1194:
    // 0x3c1194: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3c1194u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c1198: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c1198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c119c: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3C119Cu;
    {
        const bool branch_taken_0x3c119c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c119c) {
            ctx->pc = 0x3C1308u;
            goto label_3c1308;
        }
    }
    ctx->pc = 0x3C11A4u;
    // 0x3c11a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c11a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c11ac: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C11ACu;
    SET_GPR_U32(ctx, 31, 0x3C11B4u);
    ctx->pc = 0x3C11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11ACu;
    // 0x3c11b0: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C11ACu, 0x3C11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11B4u;
label_3c11b4:
    // 0x3c11b4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c11b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c11b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c11bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c11bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c11c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c11c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c11c4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3c11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c11c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c11c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c11cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c11ccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c11d0: 0x0  nop
    ctx->pc = 0x3c11d0u;
    // NOP
    // 0x3c11d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c11d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c11d8: 0xc0f05f0  jal         func_3C17C0
    ctx->pc = 0x3C11D8u;
    SET_GPR_U32(ctx, 31, 0x3C11E0u);
    ctx->pc = 0x3C11DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C11D8u;
    // 0x3c11dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C17C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C17C0u, 0x3C11D8u, 0x3C11E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C11E0u;
label_3c11e0:
    // 0x3c11e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C11E0u;
    {
        const bool branch_taken_0x3c11e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C11E0u;
        // 0x3c11e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c11e0) {
            ctx->pc = 0x3C11F0u;
            goto label_3c11f0;
        }
    }
    ctx->pc = 0x3C11E8u;
    // 0x3c11e8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c11e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c11ec: 0x0  nop
    ctx->pc = 0x3c11ecu;
    // NOP
label_3c11f0:
    // 0x3c11f0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3c11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c11f4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3c11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c11f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c11f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c11fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c11fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c1200: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c1200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1204: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c1204u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c1208: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3c1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3c120c: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C120Cu;
    SET_GPR_U32(ctx, 31, 0x3C1214u);
    ctx->pc = 0x3C1210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C120Cu;
    // 0x3c1210: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C120Cu, 0x3C1214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1214u;
label_3c1214:
    // 0x3c1214: 0x86020084  lh          $v0, 0x84($s0)
    ctx->pc = 0x3c1214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1218: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3c1218u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3c121c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C121Cu;
    {
        const bool branch_taken_0x3c121c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3C1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C121Cu;
        // 0x3c1220: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c121c) {
            ctx->pc = 0x3C122Cu;
            goto label_3c122c;
        }
    }
    ctx->pc = 0x3C1224u;
    // 0x3c1224: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x3c1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3c1228: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3c1228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3c122c:
    // 0x3c122c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3c122cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3c1230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1234: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3c1234u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3c1238: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c1238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c123c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c123cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1240: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C1240u;
    SET_GPR_U32(ctx, 31, 0x3C1248u);
    ctx->pc = 0x3C1244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1240u;
    // 0x3c1244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C1240u, 0x3C1248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1248u;
label_3c1248:
    // 0x3c1248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C1248u;
    {
        const bool branch_taken_0x3c1248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1248) {
            ctx->pc = 0x3C1278u;
            goto label_3c1278;
        }
    }
    ctx->pc = 0x3C1250u;
    // 0x3c1250: 0x86030084  lh          $v1, 0x84($s0)
    ctx->pc = 0x3c1250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1254: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C1254u;
    {
        const bool branch_taken_0x3c1254 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1254u;
        // 0x3c1258: 0x32883  sra         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1254) {
            ctx->pc = 0x3C1264u;
            goto label_3c1264;
        }
    }
    ctx->pc = 0x3C125Cu;
    // 0x3c125c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3c125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3c1260: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x3c1260u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_3c1264:
    // 0x3c1264: 0x86040086  lh          $a0, 0x86($s0)
    ctx->pc = 0x3c1264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x3c1268: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c1268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c126c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3c126cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c1270: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x3c1270u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x3c1274: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c1274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3c1278:
    // 0x3c1278: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C1278u;
    SET_GPR_U32(ctx, 31, 0x3C1280u);
    ctx->pc = 0x3C127Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1278u;
    // 0x3c127c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C1278u, 0x3C1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1280u;
label_3c1280:
    // 0x3c1280: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1288: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c1288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c128c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1290: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C1290u;
    SET_GPR_U32(ctx, 31, 0x3C1298u);
    ctx->pc = 0x3C1294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1290u;
    // 0x3c1294: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C1290u, 0x3C1298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1298u;
label_3c1298:
    // 0x3c1298: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1298u;
    {
        const bool branch_taken_0x3c1298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1298) {
            ctx->pc = 0x3C12C0u;
            goto label_3c12c0;
        }
    }
    ctx->pc = 0x3C12A0u;
    // 0x3c12a0: 0x86040084  lh          $a0, 0x84($s0)
    ctx->pc = 0x3c12a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c12a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C12A4u;
    {
        const bool branch_taken_0x3c12a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3C12A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12A4u;
        // 0x3c12a8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12a4) {
            ctx->pc = 0x3C12B4u;
            goto label_3c12b4;
        }
    }
    ctx->pc = 0x3C12ACu;
    // 0x3c12ac: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x3c12acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3c12b0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c12b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_3c12b4:
    // 0x3c12b4: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x3c12b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c12b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c12bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c12bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3c12c0:
    // 0x3c12c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c12c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c12c4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3c12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c12c8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c12cc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c12ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c12d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c12d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c12d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c12d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c12d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c12dc: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C12DCu;
    SET_GPR_U32(ctx, 31, 0x3C12E4u);
    ctx->pc = 0x3C12E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12DCu;
    // 0x3c12e0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C12DCu, 0x3C12E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12E4u;
label_3c12e4:
    // 0x3c12e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c12e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c12e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c12ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c12ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c12f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c12f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c12f4: 0xc0f062c  jal         func_3C18B0
    ctx->pc = 0x3C12F4u;
    SET_GPR_U32(ctx, 31, 0x3C12FCu);
    ctx->pc = 0x3C12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C12F4u;
    // 0x3c12f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C18B0u, 0x3C12F4u, 0x3C12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C12FCu;
label_3c12fc:
    // 0x3c12fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C12FCu;
    {
        const bool branch_taken_0x3c12fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C12FCu;
        // 0x3c1300: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c12fc) {
            ctx->pc = 0x3C1308u;
            goto label_3c1308;
        }
    }
    ctx->pc = 0x3C1304u;
    // 0x3c1304: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3c1304u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_3c1308:
    // 0x3c1308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c1308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c130c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c130cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c1310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c1314: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1314u;
        // 0x3c1318: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C131Cu;
}
