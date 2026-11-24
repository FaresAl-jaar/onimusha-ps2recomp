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

// Function: sub_001C11A0
// Address: 0x1c11a0 - 0x1c1468
void sub_001C11A0_0x1c11a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C11A0_0x1c11a0");
#endif

    switch (ctx->pc) {
        case 0x1c11d0u: goto label_1c11d0;
        case 0x1c11f4u: goto label_1c11f4;
        case 0x1c1204u: goto label_1c1204;
        case 0x1c121cu: goto label_1c121c;
        case 0x1c122cu: goto label_1c122c;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1248u: goto label_1c1248;
        case 0x1c1444u: goto label_1c1444;
        case 0x1c1450u: goto label_1c1450;
        default: break;
    }

    ctx->pc = 0x1c11a0u;

    // 0x1c11a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c11a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c11a4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c11a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c11a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c11a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c11ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c11acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c11b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c11b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c11b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c11b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c11b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c11bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c11bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c11c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c8: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C11C8u;
    SET_GPR_U32(ctx, 31, 0x1C11D0u);
    ctx->pc = 0x1C11CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C8u;
    // 0x1c11cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C11C8u, 0x1C11D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11D0u;
label_1c11d0:
    // 0x1c11d0: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c11d4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1c11d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c11dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c11dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c11e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c11e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c11e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11e8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1c11e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c11ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C11ECu;
    SET_GPR_U32(ctx, 31, 0x1C11F4u);
    ctx->pc = 0x1C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11ECu;
    // 0x1c11f0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C11ECu, 0x1C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11F4u;
label_1c11f4:
    // 0x1c11f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11f8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1c11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1c11fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C11FCu;
    SET_GPR_U32(ctx, 31, 0x1C1204u);
    ctx->pc = 0x1C1200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11FCu;
    // 0x1c1200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C11FCu, 0x1C1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1204u;
label_1c1204:
    // 0x1c1204: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c120c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1c120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c1210: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1c1210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1c1214: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1214u;
    SET_GPR_U32(ctx, 31, 0x1C121Cu);
    ctx->pc = 0x1C1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1214u;
    // 0x1c1218: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1214u, 0x1C121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C121Cu;
label_1c121c:
    // 0x1c121c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1220: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1c1220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1c1224: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C1224u;
    SET_GPR_U32(ctx, 31, 0x1C122Cu);
    ctx->pc = 0x1C1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1224u;
    // 0x1c1228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C1224u, 0x1C122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C122Cu;
label_1c122c:
    // 0x1c122c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1234: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1238: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C1238u;
    SET_GPR_U32(ctx, 31, 0x1C1240u);
    ctx->pc = 0x1C123Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1238u;
    // 0x1c123c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C1238u, 0x1C1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1240u;
label_1c1240:
    // 0x1c1240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1244: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1248:
    // 0x1c1248: 0xc51026  xor         $v0, $a2, $a1
    ctx->pc = 0x1c1248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x1c124c: 0x30440002  andi        $a0, $v0, 0x2
    ctx->pc = 0x1c124cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c1250: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1c1250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c1254: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1c1254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1c1258: 0x8e28783c  lw          $t0, 0x783C($s1)
    ctx->pc = 0x1c1258u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c125c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1c125cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c1260: 0x24c90003  addiu       $t1, $a2, 0x3
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1c1264: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1c1268: 0xc42026  xor         $a0, $a2, $a0
    ctx->pc = 0x1c1268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x1c126c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c1270: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c1274: 0x30470002  andi        $a3, $v0, 0x2
    ctx->pc = 0x1c1274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c1278: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c127c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1c1280: 0x788a0000  lq          $t2, 0x0($a0)
    ctx->pc = 0x1c1280u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1284: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1c1284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1c1288: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1c128c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1c128cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1c1290: 0x24c70002  addiu       $a3, $a2, 0x2
    ctx->pc = 0x1c1290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1c1294: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x1c1298: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c1298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c129c: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x1c129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x1c12a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c12a4: 0x306b0002  andi        $t3, $v1, 0x2
    ctx->pc = 0x1c12a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c12a8: 0xb2040  sll         $a0, $t3, 1
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1c12ac: 0x7d0a0000  sq          $t2, 0x0($t0)
    ctx->pc = 0x1c12acu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 10));
    // 0x1c12b0: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x1c12b4: 0x1642025  or          $a0, $t3, $a0
    ctx->pc = 0x1c12b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x1c12b8: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x1c12b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x1c12bc: 0x1231826  xor         $v1, $t1, $v1
    ctx->pc = 0x1c12bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x1c12c0: 0x30670002  andi        $a3, $v1, 0x2
    ctx->pc = 0x1c12c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c12c4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c12c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c12c8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1c12cc: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x1c12ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c12d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1c12d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1c12d4: 0x8e2a783c  lw          $t2, 0x783C($s1)
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c12d8: 0x81842  srl         $v1, $t0, 1
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x1c12dc: 0x1273826  xor         $a3, $t1, $a3
    ctx->pc = 0x1c12dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x1c12e0: 0x1031826  xor         $v1, $t0, $v1
    ctx->pc = 0x1c12e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
    // 0x1c12e4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1c12e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1c12e8: 0x30690002  andi        $t1, $v1, 0x2
    ctx->pc = 0x1c12e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c12ec: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c12f0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x1c12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1c12f4: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1c12f8: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x1c12f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x1c12fc: 0x25490010  addiu       $t1, $t2, 0x10
    ctx->pc = 0x1c12fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1c1300: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x1c1300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x1c1304: 0xae29783c  sw          $t1, 0x783C($s1)
    ctx->pc = 0x1c1304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 9));
    // 0x1c1308: 0x24ca0005  addiu       $t2, $a2, 0x5
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1c130c: 0x784c0000  lq          $t4, 0x0($v0)
    ctx->pc = 0x1c130cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c1310: 0xa4842  srl         $t1, $t2, 1
    ctx->pc = 0x1c1310u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1c1314: 0x8e2b783c  lw          $t3, 0x783C($s1)
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c1318: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x1c1318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x1c131c: 0x312d0002  andi        $t5, $t1, 0x2
    ctx->pc = 0x1c131cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x1c1320: 0x24c80006  addiu       $t0, $a2, 0x6
    ctx->pc = 0x1c1320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1c1324: 0xd4840  sll         $t1, $t5, 1
    ctx->pc = 0x1c1324u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1c1328: 0x1a94825  or          $t1, $t5, $t1
    ctx->pc = 0x1c1328u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x1c132c: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x1c132cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x1c1330: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1c1330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1c1334: 0x83842  srl         $a3, $t0, 1
    ctx->pc = 0x1c1334u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x1c1338: 0x7d6c0000  sq          $t4, 0x0($t3)
    ctx->pc = 0x1c1338u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 12));
    // 0x1c133c: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x1c1340: 0x8e2c783c  lw          $t4, 0x783C($s1)
    ctx->pc = 0x1c1340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c1344: 0x30ee0002  andi        $t6, $a3, 0x2
    ctx->pc = 0x1c1344u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x1c1348: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c134c: 0xe3840  sll         $a3, $t6, 1
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x1c1350: 0x1c73825  or          $a3, $t6, $a3
    ctx->pc = 0x1c1350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x1c1354: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x1c1354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x1c1358: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1c1358u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1c135c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1c135cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1c1360: 0x24c90007  addiu       $t1, $a2, 0x7
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1c1364: 0x2075021  addu        $t2, $s0, $a3
    ctx->pc = 0x1c1364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1c1368: 0x2085821  addu        $t3, $s0, $t0
    ctx->pc = 0x1c1368u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x1c136c: 0x93842  srl         $a3, $t1, 1
    ctx->pc = 0x1c136cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x1c1370: 0x1274026  xor         $t0, $t1, $a3
    ctx->pc = 0x1c1370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x1c1374: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1c1378: 0x310d0002  andi        $t5, $t0, 0x2
    ctx->pc = 0x1c1378u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1c137c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1c137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1c1380: 0xd4040  sll         $t0, $t5, 1
    ctx->pc = 0x1c1380u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1c1384: 0xae2c783c  sw          $t4, 0x783C($s1)
    ctx->pc = 0x1c1384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 12));
    // 0x1c1388: 0x1a84025  or          $t0, $t5, $t0
    ctx->pc = 0x1c1388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x1c138c: 0x2cc70040  sltiu       $a3, $a2, 0x40
    ctx->pc = 0x1c138cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1c1390: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x1c1390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x1c1394: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x1c1394u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1398: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x1c1398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1c139c: 0x8e28783c  lw          $t0, 0x783C($s1)
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13a0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1c13a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1c13a4: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x1c13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x1c13a8: 0x8e28783c  lw          $t0, 0x783C($s1)
    ctx->pc = 0x1c13a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13ac: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1c13acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1c13b0: 0xae28783c  sw          $t0, 0x783C($s1)
    ctx->pc = 0x1c13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 8));
    // 0x1c13b4: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x1c13b4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c13b8: 0x8e23783c  lw          $v1, 0x783C($s1)
    ctx->pc = 0x1c13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13bc: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1c13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1c13c0: 0x8e23783c  lw          $v1, 0x783C($s1)
    ctx->pc = 0x1c13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c13c8: 0xae23783c  sw          $v1, 0x783C($s1)
    ctx->pc = 0x1c13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 3));
    // 0x1c13cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c13ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c13d0: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13d4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c13d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c13d8: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c13e0: 0xae22783c  sw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 2));
    // 0x1c13e4: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x1c13e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c13e8: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c13ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c13f0: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c13f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c13f8: 0xae22783c  sw          $v0, 0x783C($s1)
    ctx->pc = 0x1c13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 2));
    // 0x1c13fc: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x1c13fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1c1400: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c1404: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c1404u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c1408: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c1408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c140c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c1410: 0xae22783c  sw          $v0, 0x783C($s1)
    ctx->pc = 0x1c1410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 2));
    // 0x1c1414: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1c1414u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1418: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c141c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c141cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c1420: 0x8e22783c  lw          $v0, 0x783C($s1)
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30780)));
    // 0x1c1424: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c1424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c1428: 0x14e0ff87  bnez        $a3, . + 4 + (-0x79 << 2)
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0xae22783c  sw          $v0, 0x783C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 30780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C1248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1248;
        }
    }
    ctx->pc = 0x1C1430u;
    // 0x1c1430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1438: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c143c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C143Cu;
    SET_GPR_U32(ctx, 31, 0x1C1444u);
    ctx->pc = 0x1C1440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C143Cu;
    // 0x1c1440: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C143Cu, 0x1C1444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1444u;
label_1c1444:
    // 0x1c1444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1448: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1C1448u;
    SET_GPR_U32(ctx, 31, 0x1C1450u);
    ctx->pc = 0x1C144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1448u;
    // 0x1c144c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1C1448u, 0x1C1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1450u;
label_1c1450:
    // 0x1c1450: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1454: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c145c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c145cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1460: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1460u;
        // 0x1c1464: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1468u;
}
