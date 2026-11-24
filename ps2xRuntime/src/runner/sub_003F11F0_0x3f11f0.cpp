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

// Function: sub_003F11F0
// Address: 0x3f11f0 - 0x3f12c4
void sub_003F11F0_0x3f11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F11F0_0x3f11f0");
#endif

    switch (ctx->pc) {
        case 0x3f11f0u: goto label_3f11f0;
        case 0x3f11f4u: goto label_3f11f4;
        case 0x3f11f8u: goto label_3f11f8;
        case 0x3f11fcu: goto label_3f11fc;
        case 0x3f1200u: goto label_3f1200;
        case 0x3f1204u: goto label_3f1204;
        case 0x3f1208u: goto label_3f1208;
        case 0x3f120cu: goto label_3f120c;
        case 0x3f1210u: goto label_3f1210;
        case 0x3f1214u: goto label_3f1214;
        case 0x3f1218u: goto label_3f1218;
        case 0x3f121cu: goto label_3f121c;
        case 0x3f1220u: goto label_3f1220;
        case 0x3f1224u: goto label_3f1224;
        case 0x3f1228u: goto label_3f1228;
        case 0x3f122cu: goto label_3f122c;
        case 0x3f1230u: goto label_3f1230;
        case 0x3f1234u: goto label_3f1234;
        case 0x3f1238u: goto label_3f1238;
        case 0x3f123cu: goto label_3f123c;
        case 0x3f1240u: goto label_3f1240;
        case 0x3f1244u: goto label_3f1244;
        case 0x3f1248u: goto label_3f1248;
        case 0x3f124cu: goto label_3f124c;
        case 0x3f1250u: goto label_3f1250;
        case 0x3f1254u: goto label_3f1254;
        case 0x3f1258u: goto label_3f1258;
        case 0x3f125cu: goto label_3f125c;
        case 0x3f1260u: goto label_3f1260;
        case 0x3f1264u: goto label_3f1264;
        case 0x3f1268u: goto label_3f1268;
        case 0x3f126cu: goto label_3f126c;
        case 0x3f1270u: goto label_3f1270;
        case 0x3f1274u: goto label_3f1274;
        case 0x3f1278u: goto label_3f1278;
        case 0x3f127cu: goto label_3f127c;
        case 0x3f1280u: goto label_3f1280;
        case 0x3f1284u: goto label_3f1284;
        case 0x3f1288u: goto label_3f1288;
        case 0x3f128cu: goto label_3f128c;
        case 0x3f1290u: goto label_3f1290;
        case 0x3f1294u: goto label_3f1294;
        case 0x3f1298u: goto label_3f1298;
        case 0x3f129cu: goto label_3f129c;
        case 0x3f12a0u: goto label_3f12a0;
        case 0x3f12a4u: goto label_3f12a4;
        case 0x3f12a8u: goto label_3f12a8;
        case 0x3f12acu: goto label_3f12ac;
        case 0x3f12b0u: goto label_3f12b0;
        case 0x3f12b4u: goto label_3f12b4;
        case 0x3f12b8u: goto label_3f12b8;
        case 0x3f12bcu: goto label_3f12bc;
        case 0x3f12c0u: goto label_3f12c0;
        default: break;
    }

    ctx->pc = 0x3f11f0u;

label_3f11f0:
    // 0x3f11f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f11f4:
    // 0x3f11f4: 0x310e00ff  andi        $t6, $t0, 0xFF
    ctx->pc = 0x3f11f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_3f11f8:
    // 0x3f11f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f11f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3f11fc:
    // 0x3f11fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3f1200:
    // 0x3f1200: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f1200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f1204:
    // 0x3f1204: 0x27ad0060  addiu       $t5, $sp, 0x60
    ctx->pc = 0x3f1204u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f1208:
    // 0x3f1208: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f1208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f120c:
    // 0x3f120c: 0x27ac0050  addiu       $t4, $sp, 0x50
    ctx->pc = 0x3f120cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f1210:
    // 0x3f1210: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f1214:
    // 0x3f1214: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x3f1214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_3f1218:
    // 0x3f1218: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f121c:
    // 0x3f121c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3f121cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f1220:
    // 0x3f1220: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x3f1220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_3f1224:
    // 0x3f1224: 0xe5a30000  swc1        $f3, 0x0($t5)
    ctx->pc = 0x3f1224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
label_3f1228:
    // 0x3f1228: 0xe5a20004  swc1        $f2, 0x4($t5)
    ctx->pc = 0x3f1228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
label_3f122c:
    // 0x3f122c: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x3f122cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
label_3f1230:
    // 0x3f1230: 0xe5a0000c  swc1        $f0, 0xC($t5)
    ctx->pc = 0x3f1230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
label_3f1234:
    // 0x3f1234: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3f1234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f1238:
    // 0x3f1238: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3f1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f123c:
    // 0x3f123c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3f123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f1240:
    // 0x3f1240: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3f1240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f1244:
    // 0x3f1244: 0xe5830000  swc1        $f3, 0x0($t4)
    ctx->pc = 0x3f1244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_3f1248:
    // 0x3f1248: 0xe5820004  swc1        $f2, 0x4($t4)
    ctx->pc = 0x3f1248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
label_3f124c:
    // 0x3f124c: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x3f124cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
label_3f1250:
    // 0x3f1250: 0xe580000c  swc1        $f0, 0xC($t4)
    ctx->pc = 0x3f1250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
label_3f1254:
    // 0x3f1254: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3f1254u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3f1258:
    // 0x3f1258: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x3f1258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_3f125c:
    // 0x3f125c: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x3f125cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_3f1260:
    // 0x3f1260: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x3f1260u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_3f1264:
    // 0x3f1264: 0x7d040010  sq          $a0, 0x10($t0)
    ctx->pc = 0x3f1264u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 4));
label_3f1268:
    // 0x3f1268: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_3f126c:
    if (ctx->pc == 0x3F126Cu) {
        ctx->pc = 0x3F126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1268u;
        // 0x3f126c: 0x7d030020  sq          $v1, 0x20($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F1270u;
        goto label_3f1270;
    }
    ctx->pc = 0x3F1268u;
    {
        const bool branch_taken_0x3f1268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1268u;
        // 0x3f126c: 0x7d030020  sq          $v1, 0x20($t0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 8), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1268) {
            ctx->pc = 0x3F12B8u;
            goto label_3f12b8;
        }
    }
    ctx->pc = 0x3F1270u;
label_3f1270:
    // 0x3f1270: 0x29c1000c  slti        $at, $t6, 0xC
    ctx->pc = 0x3f1270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)12) ? 1 : 0);
label_3f1274:
    // 0x3f1274: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_3f1278:
    if (ctx->pc == 0x3F1278u) {
        ctx->pc = 0x3F127Cu;
        goto label_3f127c;
    }
    ctx->pc = 0x3F1274u;
    {
        const bool branch_taken_0x3f1274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f1274) {
            ctx->pc = 0x3F12B8u;
            goto label_3f12b8;
        }
    }
    ctx->pc = 0x3F127Cu;
label_3f127c:
    // 0x3f127c: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x3f127cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
label_3f1280:
    // 0x3f1280: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3f1280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f1284:
    // 0x3f1284: 0xe1080  sll         $v0, $t6, 2
    ctx->pc = 0x3f1284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_3f1288:
    // 0x3f1288: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3f1288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f128c:
    // 0x3f128c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3f128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_3f1290:
    // 0x3f1290: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x3f1290u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f1294:
    // 0x3f1294: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3f1294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3f1298:
    // 0x3f1298: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3f1298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_3f129c:
    // 0x3f129c: 0x87a30080  lh          $v1, 0x80($sp)
    ctx->pc = 0x3f129cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_3f12a0:
    // 0x3f12a0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3f12a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_3f12a4:
    // 0x3f12a4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3f12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3f12a8:
    // 0x3f12a8: 0x87ab0070  lh          $t3, 0x70($sp)
    ctx->pc = 0x3f12a8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
label_3f12ac:
    // 0x3f12ac: 0x40f809  jalr        $v0
label_3f12b0:
    if (ctx->pc == 0x3F12B0u) {
        ctx->pc = 0x3F12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12ACu;
        // 0x3f12b0: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F12B4u;
        goto label_3f12b4;
    }
    ctx->pc = 0x3F12ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F12B4u);
        ctx->pc = 0x3F12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12ACu;
        // 0x3f12b0: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F12ACu, 0x3F12B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F12B4u;
label_3f12b4:
    // 0x3f12b4: 0x0  nop
    ctx->pc = 0x3f12b4u;
    // NOP
label_3f12b8:
    // 0x3f12b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f12b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3f12bc:
    // 0x3f12bc: 0x3e00008  jr          $ra
label_3f12c0:
    if (ctx->pc == 0x3F12C0u) {
        ctx->pc = 0x3F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12BCu;
        // 0x3f12c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F12C4u;
        goto label_fallthrough_0x3f12bc;
    }
    ctx->pc = 0x3F12BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F12BCu;
        // 0x3f12c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F12BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f12bc:
    ctx->pc = 0x3F12C4u;
}
