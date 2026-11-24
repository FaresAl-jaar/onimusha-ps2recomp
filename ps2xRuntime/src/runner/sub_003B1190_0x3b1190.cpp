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

// Function: sub_003B1190
// Address: 0x3b1190 - 0x3b12cc
void sub_003B1190_0x3b1190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1190_0x3b1190");
#endif

    switch (ctx->pc) {
        case 0x3b11f0u: goto label_3b11f0;
        case 0x3b1218u: goto label_3b1218;
        case 0x3b1244u: goto label_3b1244;
        case 0x3b1284u: goto label_3b1284;
        case 0x3b128cu: goto label_3b128c;
        default: break;
    }

    ctx->pc = 0x3b1190u;

    // 0x3b1190: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b1190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b1194: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b1194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b1198: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b1198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3b119c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3b11a0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3b11a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b11a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b11a8: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3b11a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b11acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b11b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b11b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b11b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b11b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b11b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b11bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b11c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b11c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b11c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b11c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b11c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11cc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3b11ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11d0: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x3b11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3b11d4: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3b11d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3b11d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b11d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b11dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b11dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b11e0: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x3b11e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x3b11e4: 0x25081120  addiu       $t0, $t0, 0x1120
    ctx->pc = 0x3b11e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4384));
    // 0x3b11e8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3B11E8u;
    SET_GPR_U32(ctx, 31, 0x3B11F0u);
    ctx->pc = 0x3B11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B11E8u;
    // 0x3b11ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3B11E8u, 0x3B11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B11F0u;
label_3b11f0:
    // 0x3b11f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b11f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b11f4: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B11F4u;
    {
        const bool branch_taken_0x3b11f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B11F4u;
        // 0x3b11f8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b11f4) {
            ctx->pc = 0x3B1298u;
            goto label_3b1298;
        }
    }
    ctx->pc = 0x3B11FCu;
    // 0x3b11fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b11fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1200: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b1200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1204: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3b1204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b120c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3b120cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3b1210: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3B1210u;
    SET_GPR_U32(ctx, 31, 0x3B1218u);
    ctx->pc = 0x3B1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1210u;
    // 0x3b1214: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3B1210u, 0x3B1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1218u;
label_3b1218:
    // 0x3b1218: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x3b1218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3b121c: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3b121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3b1220: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x3b1220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1228: 0xa6020528  sh          $v0, 0x528($s0)
    ctx->pc = 0x3b1228u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b122c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b122cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b1230: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3b1230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b1234: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3b1234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3b1238: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3b1238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b123c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3B123Cu;
    SET_GPR_U32(ctx, 31, 0x3B1244u);
    ctx->pc = 0x3B1240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B123Cu;
    // 0x3b1240: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3B123Cu, 0x3B1244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1244u;
label_3b1244:
    // 0x3b1244: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3b1244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3b1248: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b124c: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x3b124cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x3b1250: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b1250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b1254: 0xae000568  sw          $zero, 0x568($s0)
    ctx->pc = 0x3b1254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    // 0x3b1258: 0x26050550  addiu       $a1, $s0, 0x550
    ctx->pc = 0x3b1258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3b125c: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x3b125cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x3b1260: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3b1260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b1264: 0xae020574  sw          $v0, 0x574($s0)
    ctx->pc = 0x3b1264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 2));
    // 0x3b1268: 0xa2160578  sb          $s6, 0x578($s0)
    ctx->pc = 0x3b1268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1400), (uint8_t)GPR_U32(ctx, 22));
    // 0x3b126c: 0xae02057c  sw          $v0, 0x57C($s0)
    ctx->pc = 0x3b126cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 2));
    // 0x3b1270: 0xa2170580  sb          $s7, 0x580($s0)
    ctx->pc = 0x3b1270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1408), (uint8_t)GPR_U32(ctx, 23));
    // 0x3b1274: 0xa200058c  sb          $zero, 0x58C($s0)
    ctx->pc = 0x3b1274u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1420), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b1278: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3b1278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b127c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3B127Cu;
    SET_GPR_U32(ctx, 31, 0x3B1284u);
    ctx->pc = 0x3B1280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B127Cu;
    // 0x3b1280: 0x7e020550  sq          $v0, 0x550($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3B127Cu, 0x3B1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1284u;
label_3b1284:
    // 0x3b1284: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3B1284u;
    SET_GPR_U32(ctx, 31, 0x3B128Cu);
    ctx->pc = 0x3B1288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1284u;
    // 0x3b1288: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3B1284u, 0x3B128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B128Cu;
label_3b128c:
    // 0x3b128c: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3b128cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b1290: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1290u;
    {
        const bool branch_taken_0x3b1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1290u;
        // 0x3b1294: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1290) {
            ctx->pc = 0x3B12A0u;
            goto label_3b12a0;
        }
    }
    ctx->pc = 0x3B1298u;
label_3b1298:
    // 0x3b1298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b129c: 0x0  nop
    ctx->pc = 0x3b129cu;
    // NOP
label_3b12a0:
    // 0x3b12a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b12a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b12a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b12a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b12a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b12a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b12ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b12acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b12b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b12b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b12b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b12b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b12b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b12b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b12bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b12bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b12c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b12c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b12c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B12C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B12C4u;
        // 0x3b12c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B12C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B12CCu;
}
