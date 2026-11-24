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

// Function: sub_001E11B0
// Address: 0x1e11b0 - 0x1e1290
void sub_001E11B0_0x1e11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E11B0_0x1e11b0");
#endif

    switch (ctx->pc) {
        case 0x1e11b0u: goto label_1e11b0;
        case 0x1e11b4u: goto label_1e11b4;
        case 0x1e11b8u: goto label_1e11b8;
        case 0x1e11bcu: goto label_1e11bc;
        case 0x1e11c0u: goto label_1e11c0;
        case 0x1e11c4u: goto label_1e11c4;
        case 0x1e11c8u: goto label_1e11c8;
        case 0x1e11ccu: goto label_1e11cc;
        case 0x1e11d0u: goto label_1e11d0;
        case 0x1e11d4u: goto label_1e11d4;
        case 0x1e11d8u: goto label_1e11d8;
        case 0x1e11dcu: goto label_1e11dc;
        case 0x1e11e0u: goto label_1e11e0;
        case 0x1e11e4u: goto label_1e11e4;
        case 0x1e11e8u: goto label_1e11e8;
        case 0x1e11ecu: goto label_1e11ec;
        case 0x1e11f0u: goto label_1e11f0;
        case 0x1e11f4u: goto label_1e11f4;
        case 0x1e11f8u: goto label_1e11f8;
        case 0x1e11fcu: goto label_1e11fc;
        case 0x1e1200u: goto label_1e1200;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e1208u: goto label_1e1208;
        case 0x1e120cu: goto label_1e120c;
        case 0x1e1210u: goto label_1e1210;
        case 0x1e1214u: goto label_1e1214;
        case 0x1e1218u: goto label_1e1218;
        case 0x1e121cu: goto label_1e121c;
        case 0x1e1220u: goto label_1e1220;
        case 0x1e1224u: goto label_1e1224;
        case 0x1e1228u: goto label_1e1228;
        case 0x1e122cu: goto label_1e122c;
        case 0x1e1230u: goto label_1e1230;
        case 0x1e1234u: goto label_1e1234;
        case 0x1e1238u: goto label_1e1238;
        case 0x1e123cu: goto label_1e123c;
        case 0x1e1240u: goto label_1e1240;
        case 0x1e1244u: goto label_1e1244;
        case 0x1e1248u: goto label_1e1248;
        case 0x1e124cu: goto label_1e124c;
        case 0x1e1250u: goto label_1e1250;
        case 0x1e1254u: goto label_1e1254;
        case 0x1e1258u: goto label_1e1258;
        case 0x1e125cu: goto label_1e125c;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1264u: goto label_1e1264;
        case 0x1e1268u: goto label_1e1268;
        case 0x1e126cu: goto label_1e126c;
        case 0x1e1270u: goto label_1e1270;
        case 0x1e1274u: goto label_1e1274;
        case 0x1e1278u: goto label_1e1278;
        case 0x1e127cu: goto label_1e127c;
        case 0x1e1280u: goto label_1e1280;
        case 0x1e1284u: goto label_1e1284;
        case 0x1e1288u: goto label_1e1288;
        case 0x1e128cu: goto label_1e128c;
        default: break;
    }

    ctx->pc = 0x1e11b0u;

label_1e11b0:
    // 0x1e11b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e11b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e11b4:
    // 0x1e11b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e11b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e11b8:
    // 0x1e11b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e11b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e11bc:
    // 0x1e11bc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e11c0:
    // 0x1e11c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e11c4:
    if (ctx->pc == 0x1E11C4u) {
        ctx->pc = 0x1E11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C0u;
        // 0x1e11c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11C8u;
        goto label_1e11c8;
    }
    ctx->pc = 0x1E11C0u;
    {
        const bool branch_taken_0x1e11c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C0u;
        // 0x1e11c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11c0) {
            ctx->pc = 0x1E11D0u;
            goto label_1e11d0;
        }
    }
    ctx->pc = 0x1E11C8u;
label_1e11c8:
    // 0x1e11c8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e11cc:
    if (ctx->pc == 0x1E11CCu) {
        ctx->pc = 0x1E11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C8u;
        // 0x1e11cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11D0u;
        goto label_1e11d0;
    }
    ctx->pc = 0x1E11C8u;
    {
        const bool branch_taken_0x1e11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11C8u;
        // 0x1e11cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11c8) {
            ctx->pc = 0x1E1280u;
            goto label_1e1280;
        }
    }
    ctx->pc = 0x1E11D0u;
label_1e11d0:
    // 0x1e11d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1e11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e11d4:
    // 0x1e11d4: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e11d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e11d8:
    // 0x1e11d8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1e11d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1e11dc:
    // 0x1e11dc: 0x320f809  jalr        $t9
label_1e11e0:
    if (ctx->pc == 0x1E11E0u) {
        ctx->pc = 0x1E11E4u;
        goto label_1e11e4;
    }
    ctx->pc = 0x1E11DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E11E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11DCu, 0x1E11E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E11E4u;
label_1e11e4:
    // 0x1e11e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e11e8:
    if (ctx->pc == 0x1E11E8u) {
        ctx->pc = 0x1E11ECu;
        goto label_1e11ec;
    }
    ctx->pc = 0x1E11E4u;
    {
        const bool branch_taken_0x1e11e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e11e4) {
            ctx->pc = 0x1E1208u;
            goto label_1e1208;
        }
    }
    ctx->pc = 0x1E11ECu;
label_1e11ec:
    // 0x1e11ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e11ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e11f0:
    // 0x1e11f0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e11f4:
    // 0x1e11f4: 0x320f809  jalr        $t9
label_1e11f8:
    if (ctx->pc == 0x1E11F8u) {
        ctx->pc = 0x1E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F4u;
        // 0x1e11f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E11FCu;
        goto label_1e11fc;
    }
    ctx->pc = 0x1E11F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E11FCu);
        ctx->pc = 0x1E11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11F4u;
        // 0x1e11f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11F4u, 0x1E11FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E11FCu;
label_1e11fc:
    // 0x1e11fc: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e1200:
    if (ctx->pc == 0x1E1200u) {
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1204u;
        goto label_1e1204;
    }
    ctx->pc = 0x1E11FCu;
    {
        const bool branch_taken_0x1e11fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11FCu;
        // 0x1e1200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e11fc) {
            ctx->pc = 0x1E1280u;
            goto label_1e1280;
        }
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0x0  nop
    ctx->pc = 0x1e1204u;
    // NOP
label_1e1208:
    // 0x1e1208: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e120c:
    // 0x1e120c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1e120cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1e1210:
    // 0x1e1210: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1e1210u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e1214:
    // 0x1e1214: 0x8507000e  lh          $a3, 0xE($t0)
    ctx->pc = 0x1e1214u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_1e1218:
    // 0x1e1218: 0x8503000c  lh          $v1, 0xC($t0)
    ctx->pc = 0x1e1218u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_1e121c:
    // 0x1e121c: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1e121cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1e1220:
    // 0x1e1220: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e1224:
    // 0x1e1224: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1e1224u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e1228:
    // 0x1e1228: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1e1228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1e122c:
    // 0x1e122c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e122cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e1230:
    // 0x1e1230: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1e1230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1234:
    // 0x1e1234: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1e1234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1e1238:
    // 0x1e1238: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1e1238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1e123c:
    // 0x1e123c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e1240:
    // 0x1e1240: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e1240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e1244:
    // 0x1e1244: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1e1244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1e1248:
    // 0x1e1248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e1248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e124c:
    // 0x1e124c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e1250:
    // 0x1e1250: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1e1250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1e1254:
    // 0x1e1254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e1258:
    if (ctx->pc == 0x1E1258u) {
        ctx->pc = 0x1E1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1254u;
        // 0x1e1258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E125Cu;
        goto label_1e125c;
    }
    ctx->pc = 0x1E1254u;
    {
        const bool branch_taken_0x1e1254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1254u;
        // 0x1e1258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1254) {
            ctx->pc = 0x1E1268u;
            goto label_1e1268;
        }
    }
    ctx->pc = 0x1E125Cu;
label_1e125c:
    // 0x1e125c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e1260:
    if (ctx->pc == 0x1E1260u) {
        ctx->pc = 0x1E1264u;
        goto label_1e1264;
    }
    ctx->pc = 0x1E125Cu;
    {
        const bool branch_taken_0x1e125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e125c) {
            ctx->pc = 0x1E1280u;
            goto label_1e1280;
        }
    }
    ctx->pc = 0x1E1264u;
label_1e1264:
    // 0x1e1264: 0x0  nop
    ctx->pc = 0x1e1264u;
    // NOP
label_1e1268:
    // 0x1e1268: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e1268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e126c:
    // 0x1e126c: 0x25060010  addiu       $a2, $t0, 0x10
    ctx->pc = 0x1e126cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1e1270:
    // 0x1e1270: 0xc076680  jal         func_1D9A00
label_1e1274:
    if (ctx->pc == 0x1E1274u) {
        ctx->pc = 0x1E1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1270u;
        // 0x1e1274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1278u;
        goto label_1e1278;
    }
    ctx->pc = 0x1E1270u;
    SET_GPR_U32(ctx, 31, 0x1E1278u);
    ctx->pc = 0x1E1274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1270u;
    // 0x1e1274: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1E1270u, 0x1E1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1278u;
label_1e1278:
    // 0x1e1278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e127c:
    // 0x1e127c: 0x0  nop
    ctx->pc = 0x1e127cu;
    // NOP
label_1e1280:
    // 0x1e1280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1284:
    // 0x1e1284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1288:
    // 0x1e1288: 0x3e00008  jr          $ra
label_1e128c:
    if (ctx->pc == 0x1E128Cu) {
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1290u;
        goto label_fallthrough_0x1e1288;
    }
    ctx->pc = 0x1E1288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1288u;
        // 0x1e128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1288:
    ctx->pc = 0x1E1290u;
}
