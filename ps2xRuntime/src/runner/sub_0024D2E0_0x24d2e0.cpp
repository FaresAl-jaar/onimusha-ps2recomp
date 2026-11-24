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

// Function: sub_0024D2E0
// Address: 0x24d2e0 - 0x24d450
void sub_0024D2E0_0x24d2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D2E0_0x24d2e0");
#endif

    ctx->pc = 0x24d2e0u;

    // 0x24d2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d2e4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x24d2e4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d2ec: 0x3c0d0067  lui         $t5, 0x67
    ctx->pc = 0x24d2ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)103 << 16));
    // 0x24d2f0: 0x25adde10  addiu       $t5, $t5, -0x21F0
    ctx->pc = 0x24d2f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294958608));
    // 0x24d2f4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x24d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x24d2f8: 0x8f03001c  lw          $v1, 0x1C($t8)
    ctx->pc = 0x24d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x24d2fc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x24d2fcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x24d300: 0x8f020020  lw          $v0, 0x20($t8)
    ctx->pc = 0x24d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x24d304: 0x240bf211  addiu       $t3, $zero, -0xDEF
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963729));
    // 0x24d308: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24d30c: 0x240ff82a  addiu       $t7, $zero, -0x7D6
    ctx->pc = 0x24d30cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965290));
    // 0x24d310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d314: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x24d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x24d318: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x24d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x24d31c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d320: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x24d320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d324: 0x8f020028  lw          $v0, 0x28($t8)
    ctx->pc = 0x24d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x24d328: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x24d328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24d32c: 0x70a82818  mult1       $a1, $a1, $t0
    ctx->pc = 0x24d32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24d330: 0x8f080008  lw          $t0, 0x8($t8)
    ctx->pc = 0x24d330u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 8)));
    // 0x24d334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d338: 0x8f0a0014  lw          $t2, 0x14($t8)
    ctx->pc = 0x24d338u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x24d33c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x24d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x24d340: 0x8f0c0024  lw          $t4, 0x24($t8)
    ctx->pc = 0x24d340u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x24d344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d348: 0x24020def  addiu       $v0, $zero, 0xDEF
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3567));
    // 0x24d34c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x24d350: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x24d350u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x24d354: 0xa34818  mult        $t1, $a1, $v1
    ctx->pc = 0x24d354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x24d358: 0x70831818  mult1       $v1, $a0, $v1
    ctx->pc = 0x24d358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24d35c: 0x8f10000c  lw          $s0, 0xC($t8)
    ctx->pc = 0x24d35cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 12)));
    // 0x24d360: 0xa7080  sll         $t6, $t2, 2
    ctx->pc = 0x24d360u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x24d364: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x24d364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d368: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x24d368u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x24d36c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x24d36cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x24d370: 0x240807d6  addiu       $t0, $zero, 0x7D6
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2006));
    // 0x24d374: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x24d374u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x24d378: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x24d37c: 0x6b5818  mult        $t3, $v1, $t3
    ctx->pc = 0x24d37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x24d380: 0x70681818  mult1       $v1, $v1, $t0
    ctx->pc = 0x24d380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24d384: 0x712f7818  mult1       $t7, $t1, $t7
    ctx->pc = 0x24d384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 15); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x24d388: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x24d388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x24d38c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x24d38cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x24d390: 0x1506821  addu        $t5, $t2, $s0
    ctx->pc = 0x24d390u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x24d394: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x24d394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d398: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x24d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x24d39c: 0x8da80000  lw          $t0, 0x0($t5)
    ctx->pc = 0x24d39cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x24d3a0: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x24d3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x24d3a4: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x24d3a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x24d3a8: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x24d3a8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x24d3ac: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x24d3acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24d3b0: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x24d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x24d3b4: 0x240b7fff  addiu       $t3, $zero, 0x7FFF
    ctx->pc = 0x24d3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d3b8: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x24d3b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24d3bc: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x24d3bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x24d3c0: 0x8f020014  lw          $v0, 0x14($t8)
    ctx->pc = 0x24d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x24d3c4: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x24d3c4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x24d3c8: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x24d3c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x24d3cc: 0x240a7fff  addiu       $t2, $zero, 0x7FFF
    ctx->pc = 0x24d3ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d3d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24d3d4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x24d3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x24d3d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24d3dc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x24d3e0: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x24d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x24d3e4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x24d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x24d3e8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x24d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x24d3ec: 0x240c8000  addiu       $t4, $zero, -0x8000
    ctx->pc = 0x24d3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x24d3f0: 0x8f080014  lw          $t0, 0x14($t8)
    ctx->pc = 0x24d3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x24d3f4: 0x144502a  slt         $t2, $t2, $a0
    ctx->pc = 0x24d3f4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24d3f8: 0x165582a  slt         $t3, $t3, $a1
    ctx->pc = 0x24d3f8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24d3fc: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x24d3fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x24d400: 0x288d8000  slti        $t5, $a0, -0x8000
    ctx->pc = 0x24d400u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x24d404: 0x8f090018  lw          $t1, 0x18($t8)
    ctx->pc = 0x24d404u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x24d408: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x24d408u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x24d40c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x24d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d410: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24d410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24d414: 0x18d200b  movn        $a0, $t4, $t5
    ctx->pc = 0x24d414u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 12));
    // 0x24d418: 0x394a0000  xori        $t2, $t2, 0x0
    ctx->pc = 0x24d418u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x24d41c: 0x396b0000  xori        $t3, $t3, 0x0
    ctx->pc = 0x24d41cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)0);
    // 0x24d420: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x24d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x24d424: 0x4a200b  movn        $a0, $v0, $t2
    ctx->pc = 0x24d424u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x24d428: 0x6b280b  movn        $a1, $v1, $t3
    ctx->pc = 0x24d428u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x24d42c: 0x109482a  slt         $t1, $t0, $t1
    ctx->pc = 0x24d42cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x24d430: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x24d430u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x24d434: 0xaf080014  sw          $t0, 0x14($t8)
    ctx->pc = 0x24d434u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 8));
    // 0x24d438: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24D438u;
    {
        const bool branch_taken_0x24d438 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D438u;
        // 0x24d43c: 0xa4e50000  sh          $a1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d438) {
            ctx->pc = 0x24D444u;
            goto label_24d444;
        }
    }
    ctx->pc = 0x24D440u;
    // 0x24d440: 0xaf000014  sw          $zero, 0x14($t8)
    ctx->pc = 0x24d440u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 20), GPR_U32(ctx, 0));
label_24d444:
    // 0x24d444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d448: 0x3e00008  jr          $ra
    ctx->pc = 0x24D448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D448u;
        // 0x24d44c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D450u;
}
